import javax.swing.tree.DefaultMutableTreeNode as TreeNode

class DrawTree {
  static TreeNode createTree(List<String> strings) {
    def treeData = createMap(strings)
    TreeNode root = createNodes(treeData)
  }

  static createMap(List<String> strings) {
    // create map first. map from move -> maps for submoves
    def treeData = [ : ]
    for (String string : strings) {
      def current = treeData
      int depth = string.indexOf('<').intdiv(3)
      for (int i=0; i<depth; i++) {
        String move = string.substring(i*3, i*3+2)
        move = move
        if ((i&1)==0) {
          move = "<b>$move</b>"
        }
        if (i==depth-1) {
          move = move + string.substring(i*3+2).replaceAll('<','&lt;')
        }
        def next = current[move]
        if (next == null) {
          current[move] = next = [ : ]
        }
        current = next          
      }
    }
    return treeData
  }

  static TreeNode createNodes(treeData) {
    def root = new TreeNode('Standard Start Position')
    createSubnodes('', treeData, root)
    return root
  }

  static void createSubnodes(String preText, treeData, TreeNode root) {
    treeData.each { move, submoves ->
      String text = preText + move
      if (submoves.size()==1) {
        // if there's only one subnode, combine this node with the subnode
        createSubnodes(text+' ', submoves, root)
      }
      else {
        def subnode = new TreeNode('<html>'+text)
        root.add(subnode)
        createSubnodes('', submoves, subnode)
      }
    }
  }

  static List<String> getDraws() {
    Process proc = ["o", "x"].execute()
    println "Starting ntest"
    Thread.start { System.err << proc.err }
    Thread.start { System.out << proc.in }
    proc << "set depth 30\ndraw_tree\nquit\n"
    proc.out.close()
    println "ending ntest"
//    println proc.text
    println "---- Groovy is done ---"
    def draws = []
//    proc.in.eachLine {
//      if (it.contains("<")) {
//        draws << it 
//      }
//      else {
//        println it
//      }
//    }
//    println "Done! returning " + draws.size() + " draws"
    return draws
  }
}