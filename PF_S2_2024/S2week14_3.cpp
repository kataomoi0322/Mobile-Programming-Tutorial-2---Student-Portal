#include<iostream>
using std::string;

class Student{
    public:
    int id;
    string name;
    
    Student(int i,string n): id(i),name(n){}

    void displayStudentInfo(){
        std::cout << "Student Id: "<<id << std::endl;
        std::cout << "Student Name: "<<name << std::endl;
    }


};

class Undergraduate: public Student{
    public:
    string degree;
    
    Undergraduate(int i,string n,string d): Student(i,n),degree(d){}

    void displayUndergraduateInfo(){
        displayStudentInfo();
        std::cout << "Degree: "<<degree << std::endl;
    }
};

class UndergraduateCourse: public Undergraduate{
    public:
    string courseName;
    string courseCode;
    
    UndergraduateCourse(int i,string n,string d,string cn,string cc): Undergraduate(i,n,d),courseName(cn),courseCode(cc) {}

    void displayUndergraduateCourseInfo(){
        std::cout << "Undergraduate Course Information" << std::endl;
        displayUndergraduateInfo();
        std::cout << "Course Name: "<<courseName << std::endl;
        std::cout << "Course Code: "<<courseCode << std::endl;
    }
};

class Postgraduate: public Student{
    public:
    string researchTopic;
    
    Postgraduate(int i,string n,string r): Student(i,n),researchTopic(r){}

    void displayPostgraduateInfo(){
        displayStudentInfo();
        std::cout << "Research Topic: "<<researchTopic << std::endl;
    }
};

class PostgraduateCourse: public Postgraduate{
    public:
    string courseName;
    string courseCode;
    
    PostgraduateCourse(int i,string n,string d,string cn,string cc):Postgraduate(i,n,d),courseName(cn),courseCode(cc) {}

    void displayPostgraduateCourseInfo(){
        std::cout << "Undergraduate Course Information" << std::endl;
        displayPostgraduateInfo();
        std::cout << "Course Name: "<<courseName << std::endl;
        std::cout << "Course Code: "<<courseCode << std::endl;
    }
};

int main(){
    UndergraduateCourse UC(1001,"Fatihah","Computer Science","Data Structures","CS101");
    PostgraduateCourse PC(2001,"Izzati","Artificial Intelligence","Machine Learning","AI501");

    UC.displayUndergraduateCourseInfo();
    std::cout << std::endl;
    PC.displayPostgraduateCourseInfo();

    return 0;
}