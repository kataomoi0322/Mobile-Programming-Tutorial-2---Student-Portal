/*
double add(double num1,double num2){
    return num1+num2;
}



#include<iostream>
int main (){
    double num1,num2,result;
    char op;

    std::cin>>num1;
    std::cin>>num2;

    result = add(num1,num2);
    std::cout << result << std::endl;
    return 0;
}

//p.s this is lab skill 2 and must be include header file
//i lazy to complete it */

#include <iostream>
#include <string>
using namespace std;

class Course {
    string name, code;

public:
    Course(string n, string c) : name(n), code(c) {}
    string getName() { return name; }
    string getCode() { return code; }
};

class Student {
    string name, matrix;
    Course *subject, *sub1;

public:
    Student(string n, string m) : name(n), matrix(m) {}

    void regCourse(Course *c) {
        subject = c;
    }

    void regCourse(Course *c, int i) {
        sub1 = c;
    }

    void display() {
        cout << name << " (" << matrix << ") register "
             << subject->getName() << " (" << subject->getCode() << ")" << endl
             << sub1->getName() << " (" << sub1->getCode() << ")" << endl;
    }
};

int main() {
    Course *c = new Course("PT2", "SCS31023");
    Course *c1 = new Course("PT3", "SCS32023");
    Student s("Ainul Hashim", "A18CS0004");

    s.regCourse(c);
    s.regCourse(c1, 1);
    s.display();

    return 0;
}