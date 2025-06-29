/*----------------------------------------------------------------
                        labskill2
    name: LEE XUAN HUI
    matrix number:A24DW0423
----------------------------------------------------------------*/

#include<iostream>
#include<string>
#include"stack2.h"
#include"node.h"

int main (){
    library lib1,lib2,lib3;
    //lib1 save word that user enter
    //lib2 save binary number
    //lib3 save ascii number 
    str word;
    //user enter a word
    std::cout << "please enter a word" << std::endl;
    std::cin>> word;
    //reverse word
    //push the word that user enter
    for (char ch: word){
        lib1.push(std::string(1,ch));//push to stack
    }

    std::cout << "after reverse" << std::endl;
    //pop up word
    for (char ch: word){
        int count = word.length()-1;
        if(count >= word.length()-1){
            continue;
        }else{
            lib1.topstack();
            lib1.pop();
        }
        count++;
    }
    //convert each word to ascii number
    for(char ch: word){
        int ascii = static_cast<int>(ch);
        lib3.push(std::to_string(ascii));
        std::cout<<"convert ascii number "<<ascii<<" to binary is";
        lib2.convertBin(ascii);
        std::cout<<std::endl;
    }


    std::cout<<std::endl;
    lib1.display();

    return 0;    
}