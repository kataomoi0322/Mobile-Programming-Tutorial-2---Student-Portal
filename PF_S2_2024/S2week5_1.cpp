#include<iostream>
#include<cmath>
#include "pyramid.h"

int main (){
    double height;
    double length;
    double width;
    double answer;
    pyramid pyr;
    char op1,op2;
    std::cout << "Please enter pyramid detail:" << std::endl;
    std::cout << "Type of base (1-Square/2-Rectangle): ";
    std::cin >> op1;
    std::cout << "Calculation (1-Area/2-Volume): ";
    std::cin >> op2;

    switch (op1){
        case '1':
            std::cout << "Enter height: ";
            std::cin >> height;
            std::cout << "Enter length: " ;
            std::cin >> length;
            if (op2 == '1'){
                answer = pyr.getArea1(length,height);
                std::cout << "Area has "<<answer<<" Square cm" << std::endl;
            }else if(op2 == '2'){
                answer = pyr.getVolume1(length,height);
                std::cout << "Area has "<<answer<<" cubic cm" << std::endl;
            }else{
                std::cout << "error" << std::endl;
            }
            break;

        case '2': 
            std::cout << "Enter height: ";
            std::cin >> height;
            std::cout << "Enter length: " ;
            std::cin >> length;
            std::cout << "Enter width: " ;
            std::cin >> width;
            if (op2 == '1'){
                answer = pyr.getArea2(length,height,width);
                std::cout << "Area has "<<answer<<" Square cm" << std::endl;
            }else if(op2 == '2'){
                answer = pyr.getVolume2(length,height,width);
                std::cout << "Area has "<<answer<<" cubic cm" << std::endl;
            }else{
                std::cout << "error" << std::endl;
            }
            

            break; 

        default:
            break;
    }

    return 0;
}