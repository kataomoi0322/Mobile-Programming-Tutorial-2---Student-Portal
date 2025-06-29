#include<iostream>

class Animal{
    public:
        void eat(){
            std::cout << "eating " << std::endl;
        }
};

class dog: public Animal{
    public:
        void bark(){
            std::cout << "bark " << std::endl;
        }
};

class puppy:public dog{
    public:
        void weep(){
            std::cout << "weep " << std::endl;
        }
};

int main (){
    puppy pup;
    pup.eat();
    pup.bark();
    pup.weep();
    return 0;
}