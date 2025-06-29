#include<iostream>

int main(){
    int x,y;
    int *num1 =&x;
    int *num2 =&y;
    int temp;
    x=5; y=6;   
    std::cout << "before swap num1: "<<*num1<<" and num2:  " <<*num2<< std::endl;
    temp = x;
    x = y;
    y = temp; 
    std::cout << "after swap num1: "<<*num1<<" and num2:  " <<*num2<< std::endl;
    return 0;
}

//exercise 2
/*int main (){
    std::string Candidate[5];
    int votes[5];
    float total[5];
    int maximum;
    int winner;
    double sum;
    
    for (int i = 0; i < 5 ; i++)
    {
        std::cout << "press enter candidate " << std::endl;
        std::cin  >> Candidate[i];
        std::cout << "press enter votes " << std::endl;
        std::cin  >> votes[i]; 
    }
    std::cout << "Candidate"<<std::setw(10)<<"Votes" <<std::setw(25)<<"percent of total votes" << std::endl;
    for (int i = 0; i < 5 ; i++){
        sum += votes[i];
    }
    for (int i = 0; i < 5 ; i++)
    {   
        total[i] = (votes[i]/sum)*100;
        std::cout <<Candidate[i] <<std::setw(10)<<votes[i] <<std::setw(25)<<total[i]<<std::setw(10)<< std::endl;
    }
    for (int i=0;i<5;i++)
    {
        if(maximum<total[i]){
            maximum = total[i];
            winner = i;
        }
        
    }
    std::cout << "the winner of election is "<< Candidate[winner] << std::endl;
    return 0; 
}*/
    

//exercise 1
/*#include <iostream>
#include <iomanip>

// Function to convert Feet to Meters
double FootToMeter(float value) {
    return value * 0.305;  // Multiplying instead of dividing for clarity
}

// Function to convert Meters to Feet
double MeterToFoot(float value) {
    return value / 0.305;  // Dividing by 0.305 for conversion
}

int main() {
    double feet[10], meter[10];
    int temp;

    // Populate the feet array with foot-to-meter conversions
    for (int i = 0; i < 10; i++) {
        feet[i] = FootToMeter(i + 1); // Using i+1 to generate meaningful values
    }

    // Populate the meter array with meter-to-foot conversions
    for (int i = 0; i < 10; i++) {
        temp = 20 + (5 * i);  
        meter[i] = MeterToFoot(temp); 
    }

    // Print the table header
    std::cout << "Feet\tMeter\t|\tMeter\tFeet" << std::endl;

    // Print the values in the table
    for (int i = 0; i < 10; i++) {   
        temp = 20 + (5 * i); 
        std::cout << std::setw(4) << i + 1
                  << std::setw(10) << std::fixed << std::setprecision(2) << feet[i]
                  << "\t|\t"
                  << std::setw(4) << temp
                  << std::setw(10) << std::fixed << std::setprecision(2) << meter[i]
                  << std::endl;
    }

    return 0;
}

*/