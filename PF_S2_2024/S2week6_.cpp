#include<iostream>
/*class ClassName{
    private:
    int data;

    public:
    ClassName(int val):data(val){}

    friend void displayData(const ClassName &obj);
};

void displayData(const ClassName &obj){
    std::cout << "data "<<obj.data << std::endl;
}
int main (){
    ClassName obj(42);
    displayData(obj);
    return 0;
}*/

/*class ClassA;
class ClassB{
    public:
    void showData(const ClassA &obj);
};
class ClassA{
    private:
    int privateData;

    public:
    ClassA(int value):privateData(value){}

    friend void ClassB::showData(const ClassA &obj);
};

void ClassB::showData(const ClassA &obj){
    std::cout << "Private Data of classA "<<obj.privateData << std::endl;
}

int main(){
    ClassA objA(42);
    ClassB objB;

    objB.showData(objA);

    return 0;
}*/

/*class classB;

class classA{
    private:
        int numA;

        friend class classB;

    public:
        classA(){
            numA=12;
        };
};

class classB{
    private:
        int numB;
    
    public:
        classB(){
            numB=1;
        };

    int add(){
        classA objA;
        return objA.numA+numB;
    }
};

int main(){
    classB objB;
    std::cout << "sum: "<<objB.add() << std::endl;
    return 0;
}*/

/*class rectangle{
    private:
    int length,width;

    public:
    rectangle(int l, int w){
        length=l;
        width= w;
    };

    int area(){
        return length * width;
    }
};

int main (){
    rectangle rect(10,5);
    rectangle *rptr =&rect;
    std::cout << "area of the rectangle "<<rptr -> area() << std::endl;
    return 0;
}*/

/*class Car{
    public:
    string brand;
    int year;

    void setDetails(string b, int y) {
    brand = b;
    year = y;
    }
}

void display() {
    cout << "Brand: " << brand <<", Year:" <<< year << endl;
}

int main(){
Car cars[3];
cars[0].setDetails ("Toyota", 2015);
cars[1].setDetails("Ford", 2018);
cars[2].setDetails ("Tesla", 2020);

for (int i = 0; i < 3; i++) {
cars[i].display();
}

return 0;
}*/

/*class InventoryItem{
    private:
        char *description;double cost; int units;
    public:
        InventoryItem();
        InventoryItem(const chat desc[]);
        InventoryItem(const chat desc[],double c ,int u);
        ~InventoryItem();
}

int main (){
    InventoryItem II(40);
    InventoryItem II(3)={"hammer","wrench","pliers"}

}*/


class Complex {
private:
    int real, imag;

public:
    // Constructor using initializer list
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex add(const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }

    // Display function
    void display() {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex sum = c1.add(c2);  // Using operator overloading
    sum.display();
    return 0;
}