#ifndef BOOK_h
#define BOOK_h
#include <iostream>
#include "data.h"
#include "node.h"

//list.h
class library{
    private:
    b_case *bHead; //header book
    int count;
    b_case *bPre;  //previous book
    b_case *bLoc;  //book target location 

    public:
    bool add(NAME dataIn);
    bool del(NAME dataOut);
    bool search(NAME target);
    bool IsEmpty();
    void display();
    library();
};

library::library(){
    bHead = NULL;
    count = 0;
}

bool library::add(NAME dataIn){
    b_case *bNew = new b_case();
    //设置一个新的节点

    bNew->title = dataIn;
    bNew->addr =NULL;
    //重新定义多一次node （linked list需要定义多一次，因为有performer issue)

    if (bHead == NULL){
        std::cout << "add at first" << std::endl;
        //add at the begin, head的pointer更新
        bHead = bNew;
        count++;
    }else{
        std::cout << "add at middle" << std::endl;
        b_case *current = bHead;
        //创多一个current 目的是为了把后面的往前推
        while (current -> addr != NULL){
            current = current -> addr;
            //推到不等于null 空的为止
        }
        current -> addr = bNew;
        //最后一个的node 指向 新的node
        count++;
        //visualize：
        /*
            step1 :head-> 1 -> 2-> null
            step2 :current(head) -> 1 -> 2-> null
            step3 :(慢慢推current直到null之前) head -> 1 ->current(2)->null
            step4 :（连起来）head -> 1 -> 2 -> new -> null 
        
        */
    }
    return true;
}

bool library::del(NAME dataOut){
    if(search(dataOut)){
        //先找一下里面有没有这个东西，如果没有就error
        //先看search的function 比较好理解
        if(bPre == NULL){
            //前面空的意思是remove at beginning
            //所以我们copy后面的value去前面
            bHead = bLoc -> addr;
        }else{
            //之前的pre 会覆盖 loc
            bPre->addr =bLoc ->addr;
        }
        count--;
        std::cout << "success remove" << std::endl;
        delete(bLoc);
        return true;
    }else{
        return false;
    }
}

bool library::search(NAME target){
    bool found = false;
    bPre = NULL;
    bLoc = bHead;
    int counter =0;
    //会一直跑到loc的pointer = 空的 或者 还没找到target  
    while(bLoc != NULL && target > bLoc->title){
        //更新之前的value方便等下delete
        bPre = bLoc;
        //loc 的抄下一个位置的数值
        bLoc = bLoc->addr;
        //记录在哪一个位置
        counter++;
    }
    if (bLoc == NULL){
        std::cout << "not found" << std::endl;
        //如果跑到null了，出现error
    }else{
        found = (target == bLoc->title);
        //找到了return true but 我也不是很明白为什么他要这样写
        //对于bool 来说 value大于0 等于true
        std::cout<<"element found , at "<<counter +1 <<" \n";
        return true;
    }

    counter = 0;
    return found;
}

bool library::IsEmpty(){
    return count == 0;
}

void library::display(){
    b_case *walk;
    walk = bHead;

    while (walk != NULL){
        std::cout << "list content:" ;
        if (IsEmpty()){
            std::cout << "is empty" << std::endl;
        }else{
            std::cout<< walk -> title <<" ";
            walk = walk -> addr;
        }
    }
    std::cout << std::endl;
}

/*  
    void library::reverse(){
        b_case *current =bHead;
        b_case *prev =NULL;
        b_case *next =NULL;
        //head -> current[1] -> [2] -> null
        //prev -> null
        //next -> null

        while(current != NULL){
           // 之前的prev指向当前current的前一个节点
    // head -> current[1] -> [2] -> null
    //           ^
    //           |
    //         prev
    prev = current->addr;

    // 先保存当前节点的下一个节点，避免丢失后续链表
    // head -> current[1] -> next[2] -> null
    Node* next = current->addr;  

    // 现在的pointer从之后指向之前，实现链表反转
    // head -> current[1] -> [2] -> null
    //            |
    //           \/
    //         prev
    current->addr = prev;

    // 之前的node 更新成 现在
    // head -> current[1] -> [2] -> null
    //            |
    //           \/
    //         current
    prev = current;

    // 现在的node更新成 只会
    // head -> next[1] -> [2] -> null
    //            |
    //           \/
    //         current
    current = next;

    // 结束的时候链表结构如下：
    // head -> null
    // current <- 1 <- 2 <- next 
    }   

    // 反转完成后，prev 指向新链表的头节点
    bHead = prev;

    // 最终链表变成：
    // head -> null
    // bHead <- 1 <- 2 <- 3

    }




*/


#endif 
// book.h