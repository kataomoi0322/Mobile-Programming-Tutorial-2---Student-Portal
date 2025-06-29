/*----------------------------------------------------------------
                        labskill3
    name: LEE XUAN HUI
    matrix number:A24DW0423
----------------------------------------------------------------*/
#ifndef TREENODE_H
#define TREENODE_H
#include"data.h"

typedef struct Node{
    int data;
    Node* left;
    Node* right;


    Node(int data){
        this -> data = data;
        this -> left = nullptr;
        this -> right = nullptr;
    }
}node;


#endif // !treenode