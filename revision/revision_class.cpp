#include <iostream>

class person{
    private:
    std::string name;
    int age;

    public:
    
    void setname (std::string n){
        name = n;
    }

    std::string getname(){
            return name;
    }

    void setage(int a){
        age = a;
    }    

    int getage(){
        return age;
    }

    void displayinfo(){
        std::cout << "this is name" <<name<<" and this is age "<<age<< std::endl;
    }

};

int main(){
    person detail;

    detail.setname("lee");
    detail.setage (17);
    detail.displayinfo();

    //std::cout << "this is new name"<<detail.setname () <std::endl;
}