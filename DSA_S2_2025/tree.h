/*----------------------------------------------------------------
                        labskill3
    name: LEE XUAN HUI
    matrix number:A24DW0423
----------------------------------------------------------------*/
#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <string>
#include <ctime>
#include <queue>
#include <cstdlib>
#include <iomanip>
#include "treenode.h"
#include "data.h"

class tree {
private:
    node* root;
    const int maxDepth = 4;

public:
    tree() {
        root = nullptr;
    }

    // generate random tree
    node* RandomTree(int depth) {
        if (depth == maxDepth) return nullptr;
        
        node* newNode = new node(rand() % 100);
        newNode->left = RandomTree(depth + 1);
        newNode->right = RandomTree(depth + 1);
        return newNode;
    }

    void generateRandomTree() {
        root = RandomTree(0);
    }

    // insert node
    node* insert(node* root, int data) {
        if (root == nullptr) {
            return new node(data);
        }
        if (data <= root->data) {
            root->left = insert(root->left, data);
        } else {
            root->right = insert(root->right, data);
        }
        return root;
    }

    void insert(int data) {
        root = insert(root, data);
    }

    // inorder traversal 
    void inOrder(node* node) {
        if (!node) return;
        inOrder(node->left);
        std::cout << node->data << " ";
        inOrder(node->right);
    }

    void inOrder() {
        std::cout << "Inorder: ";
        inOrder(root);
        std::cout << "\n";
    }

    // preorder traversal
    void preOrder(node* node) {
        if (!node) return;
        std::cout << node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }

    void preOrder() {
        std::cout << "Preorder: ";
        preOrder(root);
        std::cout << "\n";
    }

    // postorder traversal
    void postOrder(node* node) {
        if (!node) return;
        postOrder(node->left);
        postOrder(node->right);
        std::cout << node->data << " ";
    }

    void postOrder() {
        std::cout << "Postorder: ";
        postOrder(root);
        std::cout << "\n";
    }

    // breadth first order
    void levelOrder() {
        if (!root) {
            std::cout << "Empty tree" << std::endl;
            return;
        }

        std::queue<node*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();

            for (int i = 0; i < size; i++) {
                node* current = q.front();
                q.pop();

                if (current) {
                    std::cout << current->data << " ";
                    q.push(current->left);
                    q.push(current->right);
                }
            }
            std::cout << "\n";
        }
    }
};

#endif


