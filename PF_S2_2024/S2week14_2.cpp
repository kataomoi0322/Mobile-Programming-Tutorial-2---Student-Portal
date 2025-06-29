#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Manager {
public:
    string name;
    int id;
    int phoneNo;
    string location;

    Manager(string n, int i, int p, string l) : name(n), id(i), phoneNo(p), location(l) {}

    virtual void purchaseInventory(string t, string s) {
        cout << "haven't got information" << endl;
    }

    void recordComplaints() {
        cout << "Recording complaints" << endl;
    }

    void manageStaff() {
        cout << "Managing staff" << endl;
    }
};

class Inventory : public Manager {
public:
    string type;
    string status;

    Inventory(string n, int i, int p, string l, string t, string s) : Manager(n, i, p, l), type(t), status(s) {}

    void getInventory(string t, string s) {
        this->type = t;
        this->status = s;
    }
};

class Chef {
public:
    string name;
    int id;
    string location;

    void takeOrders() {
        cout << "Chef is taking orders" << endl;
    }
};

class FoodItems {
public:
    int id;
    string name;

    FoodItems(int i, string n) : id(i), name(n) {}
};

class Bill {
public:
    int billNo;
    string guestName;

    Bill(int b, string g) : billNo(b), guestName(g) {}

    void display1(){
        cout<<"Guest name: "<<guestName<<"\n";
    }

    void display2(){
        cout<<"Bill No "<<billNo<<"\n";
    }
};

class Guest{
public:
    string name;
    int id;
    int phoneNo;
    string address;
    int roomNo;

    Guest(string n, int i, int p, string add, int room, int b, string g) :name(n), id(i), phoneNo(p), address(add), roomNo(room) {}

    void checkIn() {
        cout << "Check-in successful" << endl;
    }

    void checkOut() {
        cout << "Check-out successful" << endl;
    }

    void payBill() {
        cout<<"paying bill";
    }

    void orderFood() {
        cout << "Ordering food" << endl;
    }

    void submitFeedback() {
        cout << "Submitting feedback" << endl;
    }
};

class Rooms {
public:
    int roomNo;
    string location;

    Rooms(int r, string l) : roomNo(r), location(l) {}

    void display1(){
        cout<<"Room No: "<<roomNo<<"\n";
    }
};

class Receptionist  {
public:
    string rName;
    int id;
    int phoneNo;
    string location;

    Receptionist(string r, int i, int p, string l):rName(r), id(i), phoneNo(p), location(l) {}

    bool checkRoomAvailability() {
        cout << "Checking room availability" << endl;
        return true;
    }

    void bookRoom() {
        cout << "Booking room" << endl;
    }

    void generateBill() {
        cout << "Generating bill..." << endl;
    }

    void acceptCustomer() {
        cout << "Accepting customer" << endl;
    }

    void display1(){
        cout<<"Receptionist name: "<<rName<<"\n";
    }
};

class HouseKeeping {
public:
    string name;
    int id;
    string location;

    void cleanRoom() {
        cout << "Cleaning room" << endl;
    }
};

int main() {
    Receptionist rec("john smith",24255,0142555,"idk");
    Bill bill(1001,"Alice Brown");
    Rooms room(12,"idk");
    bill.display1();
    room.display1();
    rec.display1();
    bill.display2();
    return 0;
}
