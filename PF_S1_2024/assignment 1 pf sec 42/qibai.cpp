#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

class bank {
private:
    std::string Accnum;
    std::string name;
    std::string desposit;
    std::string acctype;
    std::string contact;
    std::string pin;

public:
    // Constructor
    bank() {} // Default constructor for uninitialized array elements

    bank(std::string a, std::string n, std::string d, std::string t, std::string c, std::string p) {
        Accnum = a;
        name = n;
        desposit = d;
        acctype = t;
        contact = c;
        pin = p;
    }

    // Getter methods
    std::string getname() const { return name; }
    std::string getAccnum() const { return Accnum; }
    std::string getdesposit() const { return desposit; }
    std::string getacctype() const { return acctype; }
    std::string getcontact() const { return contact; }
    std::string getpin() const { return pin; }

    // Method to display account data
    void displayAccountData() const {
        std::cout << "\nAccount Number: " << Accnum
                  << "\nName: " << name
                  << "\nDeposit: " << desposit
                  << "\nAccount Type: " << acctype
                  << "\nContact: " << contact
                  << "\nPIN: " << pin << "\n";
    }
};

int main() {
    std::fstream inputfile;
    std::string line;
    bank account[100];  // Array to store up to 100 accounts
    int count = 0;      // Track the number of accounts read

    inputfile.open("acc.txt", std::ios::in);

    if (!inputfile) {
        std::cout << "ERROR: acc.txt cannot open\n";
        return 1;
    }

    std::cout << "acc.txt is successfully opened\n";

    // Read each line and store it in the account array
    while (std::getline(inputfile, line) && count < 100) {
        std::stringstream ss(line);
        std::string Accnum, name, desposit, acctype, contact, pin;

        ss >> Accnum>> name >> desposit >> acctype >> contact >> pin;

        // Use the constructor to create an account and store it in the array
        account[count] = bank(Accnum, name, desposit, acctype, contact, pin);
        count++;
    }

    // Display all stored account data
    for (int i = 0; i < count; i++) {
        std::cout << "\nAccount " << (i + 1) << ":";
        account[i].displayAccountData();
    }

    return 0;
}

