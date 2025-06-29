#include<iostream>

void hanoi(int n, char start,char middle,char end){
    if(n == 0) return ;
    else{
        hanoi(n-1,start,end,middle);
        std::cout << start<<"->"<<end << std::endl;
        std::cout << "start:"<<start<<" middle:"<<middle<<" end:"<<end<<" n:"<<n << std::endl;
        hanoi(n-1,middle,start,end);
    }

}

//start a b c
// step 1 a c b , n = 2 
        // 
// step 2 a b c , n = 1
// print out a -> c
// 



//let the n-1 plate at start(a) move to middle(b) ,via (c)
//move the biggest plate at the start (a) move to c
//let the n-1 plate at middle(b) move to the end(c), via (a)

int main(){
    int n;
    std::cin>>n;

    hanoi(n,'a','b','c');
    return 0;

}