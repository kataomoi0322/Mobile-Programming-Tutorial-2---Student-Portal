#include<iostream>

int sum(int n){
    if (n == 0){
        return 0;
    }
    else{
            std::cout << "this is"<< n << std::endl;
    }


    return n + sum(n-1);
}

int main(){
    int n = 4;

    sum(n);
    std::cout << n << std::endl;

    return 0;
}