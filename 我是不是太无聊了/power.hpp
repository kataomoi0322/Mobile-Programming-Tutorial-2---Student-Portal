#include<iostream>
#include<cmath>
#define X std::cout << x << " "


inline void pow_sqrt_log (double &x,double &y,int &op){
    double results
    switch(op2){
        case 1 :{
            result = pow(x,y);
            X<<" power "<< y<<" = " << results <<"\n";
        }
        case 2 :{
            result = sqrt(x,y);
            X<<" power "<< y<<" = " << results <<"\n";
        }
        case 3 :{
            if(x == 10){
                result = log (y)
                std::cout << "log x Y is "<<result << std::endl;
            }else {
                result = log(x)/log(y)
                std::cout << "log x Y is "<<result << std::endl;
            }
        }
        default:{
            std::cout << "invalid" << std::endl;
        }
    }     
} 
