#include<iostream>
using std::string;

class Bank{
    public:
    string code;
    string address;

    Bank(string c,string add):code(c),address(add){} 

    void manage(){
        std::cout << "bank manage money" << std::endl;
    }
    void maintain(){
        std::cout << "bank maintain stability of money" << std::endl;
    }
};

class ATM{
    public:
    string location;
    string manageBy;

    ATM(string L, string by):location(L),manageBy(by){}

    void identifies(){
        std::cout << "atm is at "<<location <<"and manage by"<<manageBy << std::endl;
    }
    void transactions(){
        std::cout << "processing transactions" << std::endl;
    }

};

//atm transactions
class ATMTrans{
    string transactionsId;
    int date;
    string type;
    int amount;
    int postBalance;

    ATMTrans(string id, int d, string t, int a,int p):transactionsId(id),date(d),type(t),amount(a),postBalance(p){}

    void modifies(string id, int d, string t, int a,int p){
        std::cout << "processing modifies account" << std::endl;
        this -> transactionsId=id;
        this -> date = d;
        this -> type = t;
        this -> amount = a;
        this -> postBalance = p;
        std::cout << "new account details, transactions ID: "<<transactionsId
                  << "\n date of modify account: "<<date
                  << "\n type of modify account: "<<type
                  << "\n amount for modify account: "<<amount
                  << "\n postBalance for modify account: "<<postBalance
                  << std::endl;
    }

};

class Customer{
    public:
    string name;
    string address;
    string dob;
    string cardNumber;
    int pin;

    Customer(string n, string add, string d,string num, int p):name(n),address(add),dob(d),cardNumber(num),pin(p){}

    bool verifyPassword(int password){
        if (password == pin){
            return true;
        }else{
            return false;
        }
    }

    void display(){
        std::cout << "name:"<<name << std::endl;
    }
};

class Account{
    public:
    int number;
    int balance;

    Account(int n,int b):number(n),balance(b) {}

    virtual int deposit(int number){
        balance *= 1;
        return balance;
    }

    virtual int withdraw(int amount){
        if(amount > balance){
            std::cout << "invalid withdraw function" << std::endl;
            return 0;
        }else{
            std::cout << "withdraw successful" << std::endl;
            balance -= amount;
            std::cout << "current amount" << std::endl;
            return balance;
        }
    }
    int createTransaction();
};


//current account
class Current:public Account{
    public:
    //int number;
    //int balance;

    Current(int n,int b):Account(n,b){}
    int withdraw(int amount)override{
        if(amount > balance){
            std::cout << "invalid withdraw function" << std::endl;
            return 1;
        }else{
            std::cout << "withdraw successful" << std::endl;
            balance -= amount;
            std::cout << "current amount:"<<balance << std::endl;
            return balance;
        }
    }
};

class Saving:public Account{
    public:
    //int number;
    //int balance;
    Saving(int n,int b):Account(n,b){}
    int deposit(int number)override{
        balance +=number;
        std::cout << "current deposit"<<balance << std::endl;
        return balance;
    }
};

int main() {
    // Creating objects based on UML
    Bank bank("12345", "123 Bank Street");
    ATM atm("Downtown", "Bank XYZ");

    // Creating accounts
    Saving saving(1001, 1000);
    Current current(2002, 500);

    // Creating customer
    Customer customer("John Doe", "456 Elm St", "01-01-1990", "987654", 1234);

    customer.display();
    saving.deposit(500);
    current.withdraw(200);

    return 0;
}
