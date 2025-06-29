//Demonstration on this-> pointer Syntax

#include <iostream>

class pointer{
    private:
    int salary;
    
    public:
    void setSalary(int money){
        this ->salary = money;
    }
    void showSalary(){
        std::cout << "Salary :" << salary;
    }
};

int main(){
    pointer Salarys;
    int salary = 50000;

    Salarys.setSalary(salary);
    Salarys.showSalary();

    return 0;
}