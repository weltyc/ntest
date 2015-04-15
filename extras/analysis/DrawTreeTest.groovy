class DrawTreeTest extends GroovyTestCase {
  void test1() {
    def root = DrawTree.createTree(['F5 <proven>'])
    assertEquals 1, root.childCount
    assertEquals 'F5 <proven>', root.getChildAt(0).userObject
  }

  void test2() {
    def root = DrawTree.createTree(['F5 <proven>', 'E6 <proven>'])
    assertEquals 2, root.childCount
  }

  void test2a() {
    def root = DrawTree.createTree(['F5 F6 <proven>', 'F5 D6 <proven>'])
    assertEquals 1, root.childCount
    assertEquals 2, root.getChildAt(0).childCount
  }

  void testSkip() {
    String line = 'F5 F6 <proven>'
    def root = DrawTree.createTree([line])
    assertEquals 1, root.childCount
    assertEquals "Should compress multiple nodes if only one subnode", line, root.getChildAt(0).userObject
  }

  void test3() {
    def root = DrawTree.createTree(['F5 D6 C3 <proven>', 'F5 D6 C4 <proven>', 'F5 F6 E6 <proven>'])
    assertEquals "# root subnodes", 1, root.childCount
    def f5 = root.getChildAt(0)
    assertEquals "# f5 subnodes", 2, f5.childCount
    assertEquals "# f5 d6 subnodes", 2, f5.getChildAt(0).childCount
    assertEquals "no subnodes for f5 e6 since it ends in a proven line", 0, f5.getChildAt(1).childCount
  }
}