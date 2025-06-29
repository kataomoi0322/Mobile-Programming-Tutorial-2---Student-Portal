/*----------------------------------------------------------------
                        labskill2
    name: LEE XUAN HUI
    matrix number:A24DW0423
----------------------------------------------------------------*/

#ifndef STACK_H
#define STACK_H
#include<iostream>
#include<string>
#include"node.h"
#include"data.h"

//stack2.h
class library{
    private:
    b_case *head;
    int size;

    public:
    library(){
        this -> head = nullptr;
        this -> size = 0;
    }

    void push(str data){
        b_case *newB = new b_case (data);
        //at the begining
        if (head == nullptr){
            head = newB;
        }else{
            // add at the middle
            newB -> next = head;
            head = newB; 
        }
        
        size++;
    }

    void pop(){
        if (head == nullptr){
            std::cout << "this stack does not exist" << std::endl;
            std::cout<< " underflow\n";
            return;
        }

        b_case *rem = head;
        head = head-> next;
        delete rem;
        size--;
    }
    void topstack(){
        std::cout << head->book<<" ";
    }

    void search(str title){
        int count=1;
        bool found = false;
        b_case *temp= head;
        while (temp != NULL){
            if (temp->book == title){
                std::cout << "book found at position "<< count << std::endl;
                found = true;
            }
            temp = temp -> next;
            count++;//new
        }
        if (!found){
            std::cout << "this book didn't in library" << std::endl;
        }
    }

    void display(){
        b_case *temp = head;
        if (head == nullptr){
            std::cout << "this stack does not exist" << std::endl;
            return;
        }
        while (temp != nullptr){
            std::cout << temp -> book<< " ,";
            temp = temp -> next;
        }
        std::cout<<"\n";
    }

    int convertBin(int bin){
    library lib2;
    if (bin == 0){
        return 0;
    }
    while(bin > 0){
        lib2.push(std::string(1,'0'+(bin%2)));
        bin /= 2;
    }

    while (!lib2.isEmpty()){
        lib2.topstack();
        lib2.pop();
    }
    return 0;
    }

    bool isEmpty(){
        if(head == NULL){
            return true;
        }else{
            return false;
        }
    }

    int getSize(){
        return size;
    }
};


#endif // !STACK