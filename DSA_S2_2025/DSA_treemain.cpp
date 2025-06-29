/*----------------------------------------------------------------
                        labskill3
    name: LEE XUAN HUI
    matrix number:A24DW0423
----------------------------------------------------------------*/

#include "tree.h"

int main() {
    srand(time(nullptr));

    tree TREE;
    TREE.generateRandomTree(); 

    TREE.levelOrder();
    TREE.inOrder();
    TREE.preOrder();
    TREE.postOrder();

    return 0;
}
