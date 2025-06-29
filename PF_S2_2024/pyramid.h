/*#ifndef PYRAMID
#define PYRAMID
#include<iostream>
#include<cmath>

class pyramid{
    public:
    double height;
    double length;
    double width;

    //square area
    double getArea1 (double length, double height){
        double H = sqrt(pow(length / 2.0, 2) + pow(height, 2));
        return (pow(length,2)+ (4 * H * (length/2.0)));
        
    }

    //rectangle area
    double getArea2 (double length, double height,double width){
        double H1 = sqrt(pow(length / 2.0, 2) + pow(height, 2));
        double H2 = sqrt(pow(width / 2.0, 2) + pow(height, 2));
        return ((length*width) +(2 *H1* (length/2.0) )+(2* H2* (width/2)));
    }

    double getVolume1 (double length, double height){
        return ((length * length * height)/3.0);
    }

    double getVolume2 (double length, double height,double width){
        return ((length * width * height)/3.0);
    }
};



#endif //PYRAMID*/

#ifndef PYRAMID_H
#define PYRAMID_H
#include <cmath>
class Pyramid{
    private :
        double length , width , height;

    public :
    Pyramid(double l , double w, double h){
        length = l;
        width = w;
        height = h;
    }

    double GetVolume(double length , double height){
        return (length * length * height) / 3;
    }

    double GetVolume(double length , double width , double height){
        return (length * width * height) / 3;
    }

    double GetArea(double length , double height){
        return (length * length) + (2 * length * sqrt((length / 2) * (length / 2) + height * height));
    }

    double GetArea(double length , double width , double height){
        return (length * width) + (length * sqrt((width / 2) * (width / 2) + height * height)) + (width * sqrt((length / 2) * (length / 2) + height * height));
    }
};

#endif
