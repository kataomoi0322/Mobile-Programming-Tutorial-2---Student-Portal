#ifndef CPA_H
#define CPA_H
class student{
    public:
    int size = 5;
    std::string name;
    int icNumber;
    int subjectCode[size];
    double cpa;

    void getStudent(std::string student){
        this -> student =student;
    }

    void SC (int subjectCode){
        this -> subjectCode =subjectCode;
    }

    void getCpa(){

    }

    void display(){

    }
}



class Subject{

}

#endif // cgpa