#!/usr/bin/env python3

import sys

class Address:
    def __init__(self):
        self.reg1 = None
        self.reg2 = None
        self.mult = 1
        self.disp = 0
    def __repr__(self):
        addr = ""
        if self.disp != 0:
            addr = hex(self.disp) + "("
        else:
            addr = "("
        if self.reg1 is not None:
            addr = addr + self.reg1
        if self.reg2 is not None:
            addr = addr + "," + self.reg2 + "," + self.mult
        addr = addr + ")"
        return addr

    def is_stack_based(self):
        if self.reg1 is not None:
            if self.reg1 == "%rsp":
                return True
        if self.reg2 is not None:
            if self.reg2 == "%rsp":
                return True
        return False
class Parameter:
    def __init__(self):
        self.imm = None
        self.reg = None
        self.addr = None
        self.tg_addr = None
    def __repr__(self):
        if self.imm is not None:
            return "imm:" + self.imm
        elif self.reg is not None:
            return "reg:" + self.reg
        elif self.addr is not None:
            return "address:" + str(self.addr)
        elif self.tg_addr is not None:
            return "tgaddr:" + self.tg_addr
        else:
            return "empty"

class Instruction:
    def __init__(self):
        self.pc = None
        self.prefixes = []
        self.opcode = None
        self.params = []
    def __repr__(self):
        return self.pc  + " ".join(self.prefixes) + " " + self.opcode + " " + ",".join([str(x) for x in self.params])
%%
parser AsmInsn:
    ignore: '[ \t]*Disassembly of section .*:[ \t\r\n]*'
    ignore: '[ \r\t\n]+'    # white space
    ignore: '#.*\r?\n?'     # line comment via #
    ignore: '<[^>]*>' # decoded branch targets
    token HEX_ADDR: '[0-9a-fA-F]+:'
    token HEX_NUM: '-?0x[0-9a-fA-F]+'
    token PREF: '(repne|repnz|repe|repz|rep|data32)'
    token IDENTIFIER: '[a-zA-Z_]+'
    token REGISTER: '%[a-z0-9]{2,4}'
    token IMM: '\\$0x[0-9a-fA-F]+'
    token TARGET_ADDR: '[0-9a-fA-F]+'
    token NUM:  '[0-9]+'
    token END: '$'

    rule instruction: insn END {{ return insn }}
    
    rule insn:
        HEX_ADDR {{ ins = Instruction(); ins.pc = HEX_ADDR }} (PREF {{ ins.prefixes.append(PREF) }})* IDENTIFIER {{ ins.opcode = IDENTIFIER }} (param {{ ins.params.append(param) }} (',' param {{ ins.params.append(param) }} ) *)?  {{ return ins }}
    rule param:
          TARGET_ADDR {{ p = Parameter(); p.tg_addr = TARGET_ADDR; return p}}
        | IMM         {{ p = Parameter(); p.imm = IMM; return p }}
        | REGISTER    {{ p = Parameter(); p.reg = REGISTER; return p }}
        | ('%[a-h]s:')? # ignoring the segment specifier
             ('\\(' {{ addr = Address() }}
              (REGISTER {{ addr.reg1 = REGISTER }} (',' REGISTER {{ addr.reg2 = REGISTER }} (',' NUM) {{ addr.mult = NUM}})? |
                 ',' REGISTER {{ addr.reg2 = REGISTER }} (',' NUM) {{ addr.mult = NUM}}) 
              '\\)'{{ p = Parameter(); p.addr = addr; return p }}
              |
               HEX_NUM {{ addr = Address(); addr.disp = int(HEX_NUM, 0) }} '\\('
              (REGISTER {{ addr.reg1 = REGISTER }} (',' REGISTER {{ addr.reg2 = REGISTER }} (',' NUM) {{ addr.mult = NUM}})? |
                 ',' REGISTER {{ addr.reg2 = REGISTER }} (',' NUM) {{ addr.mult = NUM}}
              ) 
              '\\)'{{ p = Parameter(); p.addr = addr; return p }})
%%

if __name__ == '__main__':
    print(parse('param', '%rax'))
    print(parse('param', '%dl'))
    print(parse('param', '%ah'))
    print(parse('param', '%r19d'))
    print(parse('param', '(%rax,%rsi,2)'))
    print(parse('param', '0x0(%r19d)'))
    print(parse('param', '-0xf(%r12d)'))
    print(parse('param', '-0xf(,%r12d,4)'))
    print(parse('param', '-0xf(%rdi,%r12d,4)'))
    print(parse('param', '$0xfff)'))
    print(parse('instruction', '  41d74c:   mov    0x2838a5(%rip),%rax        <_DYNAMIC+0x200>')) 
    print(parse('instruction', '43a01b: lea    (%rax,%rsi,2),%r11d '))
    print(parse('instruction', '43a02f: retq '))
    print(parse('instruction', '43a02f: rep retq '))
    print(parse('instruction', '43a02f: repne rep rep retq '))
    rv = parse('instruction', 'blah 43a02f: repne rep rep retq ')
