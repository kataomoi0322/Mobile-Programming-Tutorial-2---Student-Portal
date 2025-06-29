#include<iostream>

int main (){
    
    for (int i = 0; i < n; i++)
    {
        std::cout << "hallo world" << std::endl;
    }
    return 0;
}

//time complexity = 0(n^2)
int function3(){

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++){
        std::cout << "hallo world" << std::endl;
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
//time complexity =O(n)
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