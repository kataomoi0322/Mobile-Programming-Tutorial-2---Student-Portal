#include <iostream>
#include<string>

class Student{
    private:
    std::string name;
    int age;

    public:
    Student(std::string name, int age){
        this -> name= name;
        this -> age =age;
    }

    void display(){
        std::cout << "Name: "<<this -> name <<", Age:"<<this -> age << std::endl;
    }

    Student& setName(std::string name){
        this -> name = name;
        return *this;
    }

    Student& setAge(int age){
        this -> age = age;
        return *this;
    }

    bool isSame (Student& other){
        return this == &other;
    }
};

int main(){
    Student student1("alice",20);
    Student student2("bob",22);

    std::cout << "initial details:" << std::endl;
    student1.display();
    student2.display();

    std::cout << "\n Comparing Objects: " << std::endl;
    if(student1.isSame(student2)){
        std::cout << "Student 1 and Student 2 are the same object" << std::endl;
    }else{
        std::cout << "Student 1 and Student 2 are different object" << std::endl;
    }

    std::cout << "\nSelf-comparison:" << std::endl;
    if(student1.isSame(student1)){
        std::cout << "student1 is comparing with itself" << std::endl;
    }

    return 0;
}