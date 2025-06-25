#include<iostream>
#include<ctime>

int main(){
    srand(time(0));
    std::string card[14][4]={{1,2,3,4,5,6,7,8,9,10,"J","K","Q","A"},
                 {1,2,3,4,5,6,7,8,9,10,"J","K","Q","A"},
                 {1,2,3,4,5,6,7,8,9,10,"J","K","Q","A"},
                 {1,2,3,4,5,6,7,8,9,10,"J","K","Q","A"}};
    bool game = true;
    int size =4;
    std::string computer[size];
    std::string player[size];

    while(game == true){
        std::cout<<"welcome to the new game"

        for (int i =0;i<2;i++){
            std::rand() % 100 +1 
        }
    }
    
}