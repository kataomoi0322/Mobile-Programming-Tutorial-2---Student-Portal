#include<iostream>
#include<string>

const int size = 5;

class student {
protected:
    int id;
    std::string name;
public:
    student(int i, std::string n): id(i), name(n) {}
};

class FullTime : private student {
private:
    double cpa;
    double fee;
public:
    FullTime(int i, std::string n, double c, double f)
        : student(i, n), cpa(c), fee(f) {}

    void display() {
        std::cout << "FullTime Student: ID=" << id << ", Name=" << name
                  << ", CPA=" << cpa << ", Fee=" << fee << std::endl;
    }

    double getFee() const { return fee; }
};

class PartTime : private student {
private:
    int total;
    double ratePerCredit;
    double payment;
public:
    PartTime(int i, std::string n, int t, double r)
        : student(i, n), total(t), ratePerCredit(r) {
        payment = total * ratePerCredit;
    }

    double calculatePayment() {
        return payment;
    }

    void display() {
        std::cout << "PartTime Student: ID=" << id << ", Name=" << name
                  << ", Credits=" << total << ", Rate=" << ratePerCredit
                  << ", Payment=" << payment << std::endl;
    }

    double getPayment() const { return payment; }
};

class Course {
private:
    std::string name;
    double income = 0;
    FullTime* ftStud[size];
    PartTime* ptStud[size];
    int totalStudPt = 0;
    int totalStudFt = 0;

public:
    Course(std::string n): name(n) {}

    void addStudentFT(FullTime* ft) {
        if (totalStudFt < size) {
            ftStud[totalStudFt++] = ft;
        }
    }

    void addStudentPT(PartTime* pt) {
        if (totalStudPt < size) {
            ptStud[totalStudPt++] = pt;
        }
    }

    double calculateIncome() {
        income = 0;
        for (int i = 0; i < totalStudFt; ++i)
            income += ftStud[i]->getFee();
        for (int i = 0; i < totalStudPt; ++i)
            income += ptStud[i]->getPayment();
        return income;
    }

    void display() {
        std::cout << "Course: " << name << std::endl;
        for (int i = 0; i < totalStudFt; ++i)
            ftStud[i]->display();
        for (int i = 0; i < totalStudPt; ++i)
            ptStud[i]->display();
        std::cout << "Total Income: " << calculateIncome() << std::endl;
    }
};

int main() {
    Course c("CS");
    FullTime f1(301, "Ali", 3.25, 19800.50);
    FullTime f2(302, "Muthu", 2.85, 21220.50);
    PartTime p1(401, "Kevin", 15, 1500.35);

    c.addStudentFT(&f1);
    c.addStudentFT(&f2);
    c.addStudentPT(&p1);
    c.display();

    return 0;
}
