#include <iostream>

double Value(double x , double y){
    x = 8;
    y = 10;

    double value = x/y;
    std::cout << value;

    return 0;
}

int main(){
    double x;
    double y;
    Value(x,y);
    
    return 0;
}
