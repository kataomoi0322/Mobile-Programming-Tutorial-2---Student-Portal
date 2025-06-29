#include <iostream>
#include <string>


class human{
    public :
    std::string name;
    int age;
    
    void greeting(){
        std::cout << "hi !" << std::endl;
    }
    void speak ( std::string &word){
        std::cout << word << std::endl;
    }
};
 
int main (){
    human ali;
    ali.name = "ali";
    ali.age =18;
    std::cout << "his or her name is "<<ali.name<<" and his or her age is "<<ali.age << std::endl;
    ali.greeting();
    std::string word;
    std::getline(std::cin,word); 
    ali.speak(word);

    return 0;

}