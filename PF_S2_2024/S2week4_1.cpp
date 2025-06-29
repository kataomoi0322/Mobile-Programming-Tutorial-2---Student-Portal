#include <iostream>
class shape{
    public:
    double length;
    double width;

    void setLength(double l){
        length =l;
    }
    double getLength(){
        return length;
    }

    void thisWidth(double width){
        this -> width = width;
    }

    double getArea(double width ,double length){
        return width*length;
    }
    
    private:
    
};

int main(){
    double length,width;
    shape work;
    std::cout << "please enter width of the shape" << std::endl;
    std::cin>>width;
    std::cout << "please enter length of the shape" << std::endl;
    std::cin>>length;
    work.setLength(length);
    work.thisWidth(width);
    double answer = work.getArea(width,length);
    std::cout << "the area of the shape is "<<answer<< std::endl;

    return 0;
}