#include <iostream>

int main(){
    int x = 4;
    //Integer named x is set to 4
    int *px = &x;
    //Integer of pointer x is now set to the reference address of x
    int y = *px;
    //Integer named y is now set to the thing pointed to by px

    std::cout << "Value of x : " << x << "\n";
    std::cout << "Value of *px : " << *px << "\n";
    std::cout << "Value of &x : " << &x << "\n";
    std::cout << "Value of y : " << y << "\n";
}