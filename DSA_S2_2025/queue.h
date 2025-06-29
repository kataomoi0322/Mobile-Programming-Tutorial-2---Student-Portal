/*----------------------------------------------------------------
                        labskill3
    name: LEE XUAN HUI
    matrix number:A24DW0423
----------------------------------------------------------------*/
#ifndef QUEUE_H
#define QUEUE_H
#include "node.h"
#include "data.h"
#include <iostream>
class counter {
    private:
    b_case *front;
    b_case *rear;
    int size;
    const int maxSize = 3;

    public:
    counter(){
        front = rear = NULL;
        this -> size  = 0;
    }

    bool enqueue(str dataIN){
        b_case *newB = new b_case (dataIN);
        if (isEmpty()){
            front = rear = newB;
            size++;
            return true;
        }else if (maxSize == size){
            std::cout << "already full" << std::endl; 
            return false;      
        }else{
            rear -> next = newB;
            rear = newB;
            size ++;
            return true;
        }
    }

    bool dequeue(str &dataOUT){
        if (isEmpty()){
            std::cout << "this queue already empty" << std::endl;
            return false;
        }
        b_case *temp = front;
        dataOUT = front -> user;
        front = front -> next;
        if (front == NULL){
            rear = NULL;
        }
        delete temp;
        size --;
        return true;
    }

    str peekFront(){
        if (isEmpty()){
            std::cout << "this queue is empty" << std::endl;
            return "";
        }else{
            return front -> user;
        }
    }

    str peekRear(){
        if (isEmpty()){
            std::cout << "this queue is empty" << std::endl;
            return "";
        }else{
            return rear -> user;
        }
    }

    int getSize(){
        return size;
    }

    void display(){
        b_case *temp = front;
        
        if (isEmpty()){
            std::cout << "this queue is empty" << std::endl;
        }
        
        while (temp != NULL){
            std::cout << temp -> user<<", "<< std::endl;
            temp = temp -> next;
        }
        std::cout<<std::endl;
        delete temp;
    }   

    void destroy(){
        b_case *del = front;
        

        while(!isEmpty()){
            b_case *bwalk = front -> next;
            delete del;
            del = bwalk;
        }

        this -> front =NULL;
        this -> rear =NULL;
        this -> size =0;
    }

    bool isEmpty(){
        if (front == NULL){
            return true;
        }else{
            return false;
        }
    }

    bool isFull(){
        if (size == maxSize) return true;
        return false;
    }
};

#endif // !QUEUE.H
