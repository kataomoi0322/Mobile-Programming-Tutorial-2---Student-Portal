#include <iostream>
/*class Product{
    double productCost = 0;
    double productSale = 0;

    public:
    Product(double buyPrice);
    static double totalCost;
    double getProductSale();
};

double Product::totalCost =0.0;

Product::Product(double buyPrice){
    productCost = buyPrice+35.50;
    totalCost += productCost;
}

double Product::getProductSale(){
    productSale = productCost+6.50;
    return productSale;
}

int main(){
    Product syampoo(8.90), brush(3.50);
    std::cout << "\nProduct Price:"
              << "\n\tSyampoo RM"<<syampoo.getProductSale()
              << "\n\tBrush RM"<<brush.getProductSale() 
              << "\nTotal Cost: RM"<<Product::totalCost
              << "\nTotal brush cost RM"<<brush.totalCost;
    return 0;
}*/

/*
class Circle{
    private:
        double radius;
    public:
        static const double pie;//avoid open multi-memory
        Circle (double r);
        double getArea();
};

const double Circle::pie = 3.14159;

Circle::Circle(double r){
    radius = r;
}

double Circle::getArea(){
    return (pie*radius*radius);
}

int main(){
    Circle c1(5.5),c2(12.80);
    std::cout << "Area c1="<<c1.getArea()<< "\nArea c2="<<c2.getArea()<<"\nPie="<<Circle::pie<< std::endl;
    std::cout << c1.pie << std::endl;
    return 0;
}*/

/*class Triangle{
    private:
        mutable double height;
        double base;
    public:
        Triangle(double b, double h);
        double getArea() const;
        double getBase() const;
        void setheight(double h) const;
};

Triangle::Triangle(double b, double h){
    base = b;
    height = h;
}

double Triangle::getArea() const{
    return (0.5*base*height);
}
//dont allow to change the value of base
double Triangle::getBase() const{
    return base;
}
//allow to change the value of height even though it is const because it is mutable
void Triangle::setheight(double h) const{
    height = h;
}
int main(){
    Triangle t1(5.0,4.0);
    std::cout << "base for t1:"<<t1.getBase()
              << "\narea for t1:"<<t1.getArea();
    t1.setheight(10.0);  
    std::cout << "\nbase for t1:"<<t1.getBase()
              << "\narea for t1:"<<t1.getArea();

    return 0;
}*/

#include <cstring>

class PersonInfo{
    private:
        char *name;
        int age;
    public:
        PersonInfo(char *n, int a){
            name = new char[strlen(n)+1];
            strcpy(name,n);
            age = a;
        };
        PersonInfo(const PersonInfo &obj){
            name = new char[strlen(obj.name)+1];
            strcpy(name,obj.name);
            age = obj.age;
        };
        ~PersonInfo(){
            delete [] name;
            std::cout << "already delete" << std::endl;
        };
        const char *getName(){
            return name;
        };
        int getAge(){
            return age;
        };
};

int main (){
    PersonInfo p1("Ali", 25);
    PersonInfo p2 = p1;
    p1.~PersonInfo();
    std::cout << "Name: "<<p1.getName() << "\nAge: "<<p1.getAge() << std::endl;
    std::cout << "Name: "<<p2.getName() << "\nAge: "<<p2.getAge() << std::endl;
    return 0;
}