#include <iostream>
using namespace std;

//association
/*
class patient {
    public:
        string name;
        patient(string n) { name = n; }
    };
    

class Doctor {
public:
    string name;

    Doctor(string n) { name = n; }

    void treatPatient(patient &p) {  
        cout << "doctor name: " << name << endl;
        cout << "patient name: " << p.name << endl; 
    }
};

int main() {
    Doctor d1{"Smith"};
    patient p1("John");

    d1.treatPatient(p1);
    return 0;
}
*/

//aggreation
/*
#include <iostream>
using namespace std;

class professor {
public:
    string name;
    professor(string n) { name = n; }
};

class university {
public:
    string uniname;
    professor* pro[5]; // 存储教授指针
    int count;
    static const int size;

    university(string n) {
        uniname = n;
        count = 0;
    }

    void addProfessor(professor* p);
    void showProfessor();
};

const int university::size = 5;

void university::addProfessor(professor* p) {
    if (count < size) {
        pro[count] = p; // 修正数组存储指针的方式
        count++;
    } else {
        cout << "Cannot add more professors. University is full!\n";
    }
}

void university::showProfessor() {
    cout << "Professors in " << uniname << ":\n"; // 修正 uniname
    for (int i = 0; i < count; i++) {
        cout << pro[i]->name << endl; // 修正数组访问方式
    }
}

int main() {
    professor p1("Dr. Gray"), p2("Dr. Black");
    university u("University Test");

    u.addProfessor(&p1);
    u.addProfessor(&p2);

    u.showProfessor();
    return 0;
}*/

//composition
class Engine {
public:
    string type;

    Engine(string t) : type(t) {} 

    void start() {
        cout << "Engine (" << type << ") is starting...\n";
    }
};

class Car {
private:
    Engine engine;
    string engineType;

public:
    
    //Car(string engineType) : engine(engineType) {}
    Car(string engineType){
        engine.type = engineType;
    }
    void startCar() {
        cout << "Car is starting...\n";
        engine.start();  
    }
};

int main() {
    Car myCar("V8");  
    myCar.startCar();

    return 0;
}

