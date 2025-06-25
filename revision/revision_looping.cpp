#include <iostream>

int main (){
    
    int num1, num2 ,total;      
    int count = 0;

    while(count != 0){
        std::cout << "please enter a num" << std::endl;
        std::cin>>num1;
        std::cout << "please enter one more num" << std::endl;
        std::cin>>num2;
        total = num1 +num2;
        std::cout << "total is " << total <<std::endl;
        count++;
    }
    std::cout << "end task" << std::endl;
    return 0;
}
// while(count != 0)
/*  do{
        std::cout << "please enter a num" << std::endl;
        std::cout << "please enter one more num" << std::endl;
        total = num1 +num2;
        std::cout << "total is " << std::endl;
        count++;
    }while(count != 0);*/

    /*while(count <= 2){
        std::cout << "please enter a num" << std::endl;
        std::cin>>num1;
        std::cout << "please enter one more num" << std::endl;
        std::cin>>num2;
        total = num1 +num2;
        std::cout << "total is " << total <<std::endl;
        count++;
    }*/