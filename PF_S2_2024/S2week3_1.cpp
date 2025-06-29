#include<iostream>
void display (int &stock,int &order,int &charges){
    int temp1 = order - stock;
    int temp2 = stock - order;
    //std::cout << order<<" "<<stock<<" "<<charges<<" " << std::endl;
    std::cout << "the number of spools ready to ship for current stock is "<<stock << std::endl;

    if (temp1>0){
        std::cout << "the number of spools in backorder is "<<temp1 << std::endl;
    }else
    {
        std::cout << "current not in backorder" << std::endl;
    }

    std::cout << "subtotal of the portion ready to ship is $"<<(stock * 100) << std::endl;


    std::cout << "total shipping and handling charges that ready to ship is $"<<(stock * charges) << std::endl;

    if (temp1>0)
    {
        std::cout << "total of the order ready to ship is "<<stock << std::endl;    
    }else
    {
        std::cout << "total of the order ready to ship is "<<stock - temp2 << std::endl;
    }

}

void prompt(int &stock,int &order,int &charges){
    char op;
    std::cout << "please enter number of spools ordered" << std::endl;
    std::cin  >> order;
    while (order<=1){
        if (order <=1){
        std::cout << "order cannot be less than 1,please enter again" << std::endl;
        std::cin  >> order;
    }} 
    std::cout << "please enter number of spools stock" << std::endl;
    std::cin  >> stock;
    while (stock<=0){
        if (stock <=0){
        std::cout << "stock cannot be less than 0,please enter again" << std::endl;
        std::cin  >> stock;
    }} 
    std::cout << "have special charges for shipping(Y/N) " << std::endl;
    std::cin  >>op;

    if (op =='Y'||op =='y'){
        std::cout << "please enter special charges" << std::endl;
        std::cin  >> charges;
        while (charges<0){
        if (charges <0){
        std::cout << "charges cannot be negative,please enter again" << std::endl;
        std::cin  >> charges;}
    }}else if (op =='N'||op =='n'){
        charges =10;
    }else{
        std::cout << "error" << std::endl;
    }
}

int main(){
    int stock,order,charges;
    int *ptr1 = &stock;
    int *ptr2 = &order;
    int *ptr3 = &charges; 
    char op;
    
    prompt (stock,order,charges);
    display(stock,order,charges);
    return 0;
}


//exercise 2
/*#include<iostream>
#include<cmath>
double distance(int x1, int x2,int y1,int y2){
    double temp1, temp2;
    temp1=pow((x2-x1),2);
    temp2=pow((y2-y1),2);
    return sqrt(temp1+temp2);
}   

double radius(int x1, int x2,int y1,int y2){
    double temp1, temp2;
    temp1=pow((x2-x1),2);
    temp2=pow((y2-y1),2);
    return sqrt(temp1+temp2);
}

double circumference(double r){
    return 2 * 3.1416 * r;
}

double area(double r){
    return 3.1416 * pow(r, 2);
}

int main (){
    int x1,x2,y1,y2;
    double answer1,answer2,answer3,answer4;

    std::cout << "please enter first position" << std::endl;
    std::cout << "X" << std::endl;
    std::cin >>x1;
    std::cout << "Y" << std::endl;
    std::cin >>y1;

    std::cout << "please enter second position" << std::endl;
    std::cout << "X" << std::endl;
    std::cin >>x2;
    std::cout << "Y" << std::endl;
    std::cin >>y2;

    answer1 = distance(x1,x2,y1,y2);

    std::cout << "the distance between first and second position is " << answer1<<std::endl;

    answer2 = radius(x1,x2,y1,y2);

    std::cout << "the radius of the circle  is " << answer2<<std::endl;
    std::cout << "the diameter of the circle is "<< (answer2 * 2) << std::endl;

    answer3 = circumference(answer2);

    std::cout << "the parameter of the circle is " << answer3<<std::endl;

    answer4 = area(answer2);

    std::cout << "the area of the circle is " << answer4<<std::endl;

    return 0;
}*/