#include<iostream>

//proses time 
//time complexity

int main (){
    int a; int sum;
    //proses time 1+1 =2
    //o(1)

    for (int i = 0; i < n; i++)
    {
        std::cout << "hallo world" << std::endl;//O(1)
    }
    return 0;
}

//time complexity = 0(n^2)
int function3(){

    for (int i = 0; i < n; i++)//o(n)
    {
        for (int i = 0; i < n; i++){//o(n)
        std::cout << "hallo world" << std::endl;//o(1)

        }
    }
}

//time complexity = 0(n^2)
int function4(){
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++){
        std::cout << "hallo world" << std::endl;
        }
    }

    for (int i = 0; i < n; i++){
        std::cout << "hallo world" << std::endl;
    }
}
//super ultra special case
//time complexity =O(log n)
int function5(){

    for (int i = 0; i < n; i*=2){
        std::cout << "hallo world" << std::endl;
    }
}
//time complexity =Oe(n)
int function6(){
    int i=0,s=0;
    while(s>n){
        i++;
        s+=i;
    }
}

//time complexity =O( n^(1/2))
int function7(){
    int i=0,s=0;
    while(s<2){
        i++;
        s+=i;
    }
}

//time complexity =O(log n)
int function8(){
    int i=1;
    while(i<n){
        i*=2;
    }
}
//speed 
// 1 > log n > n > n log n> n^2> n^3 > 2^n