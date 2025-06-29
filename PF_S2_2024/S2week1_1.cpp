#include <iostream>

int main() {
    int size =10;
    int arr[size];
    int sum;
    int count=0;
    int maximum=1;
    int minimum=1;
    for (int i=0;i<size;i++)
    {   
        std::cout << "enter "<<i+1 <<" number" << std::endl;
        std::cin.clear();
        std::cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        std::cout << arr[i]<<", " << std::endl;
    }
    for (int i=0;i<size;i++)
    {
        sum += arr[i];
        count++;
    }
    std::cout << "the sum of the array is" <<sum<< std::endl;
    std::cout << "average of the array is" <<sum/count<< std::endl;

    for (int i=0;i<size;i++)
    {
        if(maximum<arr[i]){
            maximum = arr[i];
        }
        if(minimum>arr[i]){
            minimum = arr[i];
        }
    }
    std::cout << "the max number is "<<maximum << std::endl;
    std::cout << "the min number is "<<minimum << std::endl;

    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        std::cout << arr[i]<<", ";
    }
}

