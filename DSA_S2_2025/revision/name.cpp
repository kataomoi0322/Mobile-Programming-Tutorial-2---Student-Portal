#include <iostream>
int calculation(int num1,int num2,int total){
    total = num1 +num2;
    std::cout << "total is " << total <<std::endl;
    return total;
}

int main (){
    int num1,num2,total;
    std::cout << "please enter a num" << std::endl;
    std::cin>>num1;
    std::cout << "please enter one more num" << std::endl;
    std::cin>>num2;
    calculation (num1 , num2, total );
   
    return 0;
}

// return num1 + num2;
// int total;
// 