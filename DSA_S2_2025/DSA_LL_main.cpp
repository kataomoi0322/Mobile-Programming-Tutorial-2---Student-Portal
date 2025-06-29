#include<iostream>
#include "book.h"
#include "data.h"
#include "node.h"
#include <string>

int main (){
    library library;
    std::string dataIn;
    std::string dataOut;
    std::string target;
    char op;
    bool func = true;
    do
    {   
        std::cout << "menu\n"<<"1.add book\n"<<"2.del book\n" <<"3.search book\n" <<"4.display book\n"<<"5.exit\n";
        std::cout << "please enter operator" << std::endl;
        std::cin>>op;
    
        switch (op)
        {
            case '1':
                std::cout << "please enter book that you want" << std::endl; 
                std::cin.ignore();   
                std::getline(std::cin,dataIn);
                library.add(dataIn);
                break;
            case '2':
                std::cout << "please enter book that you want to remove" << std::endl;
                std::cin.ignore();   
                std::getline(std::cin,dataOut);
                library.del(dataOut);
                break;
            case '3':
                std::cout << "please enter book that you want to search" << std::endl;
                std::cin>>target;
                library.search(target);
                break;
            case '4':
                std::cout << "display all current book in libary" << std::endl;
                library.display();
                break;
            case '5':
                std::cout << "now exit" << std::endl;
                func = false;
                return 0;
                break;
            default:
                std::cout << "operation error please try again" << std::endl;
                break;
        }  
    }while(func == true);
    
}