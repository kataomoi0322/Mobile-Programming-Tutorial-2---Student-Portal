#include <iostream>
#include "data.h"
#include "node.h"
#include "queue.h"

int main(){
    counter queue1,queue2;
    str dataIn;
    str dataOut;
    char which;
    char op;
    bool func = true;
    int size;
    do
    {   
        std::cout << "menu\n"<<"\033[31m1.enqueue\n"
                             <<"\033[33m2.dequeue\n" 
                             <<"\033[32m3.check amount of people currently\n" 
                             <<"\033[34m4.peek front\n"
                             <<"\033[35m5.peek rear\n"
                             <<"\033[36m6.display all people\n"
                             <<"\033[31m7.destroy queue\n"
                             <<"\033[33m8.exit\n";
        std::cout << "\033[37m please enter operator" << std::endl;
        std::cin>>op;
    
        switch (op)
        {
            case '1':
            //if statement choose counter
                std::cout << "please enter user that want to queue" << std::endl; 
                std::cin.ignore();   
                std::getline(std::cin,dataIn);
                if(queue1.isFull()){
                    queue1.enqueue(dataIn);
                }else{
                    queue2.enqueue(dataIn);
                }
            
                break;
            case '2':
            //choose counter or automatic check?
                std::cout << "which counter do you want to dequeue" << std::endl;
                std::cin>>which;
                std::cout << "please enter user that want to dequeue" << std::endl;
                std::cin.ignore();   
                std::getline(std::cin,dataOut);
                if(which == '1'){
                    queue1.dequeue(dataIn);
                }else{
                    queue2.dequeue(dataIn);
                }
                
                break;
            case '3':
            //all counter size 
                size1 = queue1.getSize();
                size2 = queue2.getSize();
                std::cout << "the amount of the people at counter 1 is :"<<size1 << std::endl;
                std::cout << "the amount of the people at counter 2 is :"<<size2 << std::endl;
                break;
            case '4':
            //orang depan di semua counter
                dataOut =queue1.peekFront();
                std::cout << "front people at counter 1 is name :"<<dataOut<< std::endl;
                dataOut =queue2.peekFront();
                std::cout << "front people at counter 2 is name :"<<dataOut<< std::endl;
                break;
            case '5':
            //~rear ~
                dataOut =queue1.peekRear();
                std::cout << "rear people at counter 1 is name :"<<dataOut<< std::endl;
                dataOut =queue2.peekRear();
                std::cout << "rear people at counter 2 is name :"<<dataOut<< std::endl;
                break;
            case '6': 
            //display all counter  
                std::cout << "display all current people in libary at counter 1" << std::endl;
                queue1.display();
                std::cout << "display all current people in libary at counter 2" << std::endl;
                queue2.display();
                break;
            case '7': 
            //destroy all  
                std::cout << "destroy all counter in libary" << std::endl;
                queue1.destroy();
                queue2.destroy();
                break;
            case '8':
                std::cout << "now exit" << std::endl;
                func = false;
                return 0;
                break;
            default:
                std::cout << "operation error please try again" << std::endl;
                break;
        }  
    }while(func == true);
    

    return 0;
}