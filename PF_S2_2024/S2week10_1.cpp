#include<iostream>

class employee{
    private:
        int staffId;

    protected:
        std::string name;
        char gender;
        int age;

    public:
        employee(){
            staffId = -1;
        }

        employee(int id){
            staffId = id;
        }

        ~employee(){
            std::cout << "\n Employee Destructor" << std::endl;
        }

        void setStaffId(int id){
            staffId = id;
        }

        int getStaffId(){
            return staffId; 
        }
        void display();
};

void employee::display(){
    std::cout << "\n Detail employee:"\
              <<"\n\tName: "<<name
              <<"\n\tStaff Id: "<<staffId
              <<"\n\tGender "<<gender
              <<"\n\tAge "<<age;
};

class permanent :public employee{
    private:
        double salary;
    public:
        permanent(int i, std::string n, char g);
        void setAge(int a){age =a;}
        void setSalary(double s){salary = s;}
        void display();
        ~permanent(){
            std::cout << "\n permanent Destructor" << std::endl;
        }
};

permanent::permanent(int i, std::string n, char g){
    setStaffId(i);
    name = n;
    gender =g;
}

void permanent::display(){
    std::cout << "\n Detail employee:"\
              <<"\n\tName: "<<name
              <<"\n\tStaff Id: "<<getStaffId()
              <<"\n\tGender "<<gender
              <<"\n\tAge "<<age
              <<"\n\tSalary "<<salary;
}

class temporary :public employee{
    private:
        double payment;
        double commission;
        int dayWork;
    public:
        temporary(int i, std::string n, char g,int d,double c);
        void setAge(int a){age =a;}
        void setDayWork(int d){dayWork =d;}
        double calculatePayment();
        void display();
        ~temporary(){
            std::cout << "\n temporary Destructor" << std::endl;
        }
};

temporary::temporary(int i, std::string n, char g,int d,double c){
    setStaffId(i);
    name = n;
    gender =g;
    setAge(20);
    dayWork =d;
    commission =c;
    payment = calculatePayment();
};

double temporary::calculatePayment(){
    payment = 1500.00+(commission/10*1500.00*dayWork);
    return payment;
}

void temporary::display(){
    std::cout << "\n Detail employee:"\
              <<"\n\tName: "<<name
              <<"\n\tStaff Id: "<<getStaffId()
              <<"\n\tGender "<<gender
              <<"\n\tAge "<<age
              <<"\n\tPayment "<<calculatePayment();

}

int main(){
    employee emp(1001);
    emp.display();

    permanent p(1002,"John Doe",'M');
    p.setAge(34);
    p.setSalary(2500.50);
    p.display();
    std::cout << "\n Form main display staff id" <<p.getStaffId();
    temporary t(1003,"Mary Jane",'F',18,10.5);
    t.display();
    std::cout << "\n Form main display staff id" <<t.getStaffId();

    return 0;
}