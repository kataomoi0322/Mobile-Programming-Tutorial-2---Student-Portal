#include <iostream>

void inputGrades(int grade[], int size);
double calculateAverage(int grade[], int size);
int countPassingStudents(int grade[], int size, int passingGrade);
int findHighestGrade(int grade[], int size);
//define function

int main() {
    int test;
    
    std::cout << "Please enter the number of students: ";
    std::cin >> test;
	int size = test +1 ;
    int grade[size];  
	
	//+1 is i want it start with 1
	
    inputGrades(grade, size);

    double average = calculateAverage(grade, size);
    std::cout << "The average grade is " << average << "\n";

    int count = countPassingStudents(grade, size, 60);
    std::cout << "Number of passing students is " << count << "\n";

    int highestGrade = findHighestGrade(grade, size);
    std::cout << "The highest grade is " << highestGrade << "\n";

    return 0;
}

void inputGrades(int grade[], int size) {
    for (int i = 1; i < size; i++) {
        std::cout << "Please enter student "<<i<<"'s grade:";
        std::cin >> grade[i];
    }
    //looping to enter grade
}

double calculateAverage(int grade[], int size) {
    int sum = 0;
    for (int i = 1; i < size; i++) {
        sum += grade[i];
    }
    return static_cast<double>(sum) / size;
    //calculater average and return the average to main function
}

int countPassingStudents(int grade[], int size, int passingGrade) {
    int count = 0;
    for (int i = 1; i < size; i++) {
        if (grade[i] >= passingGrade) {
            count++;
        }
    }//is the grade is passing counter will be add
    return count;
}

int findHighestGrade(int grade[], int size) {
    int highestGrade = grade[1];
    for (int i = 2; i < size; i++) {  
        if (grade[i] > highestGrade) {
            highestGrade = grade[i];
        }
    }//comprate with next grade to find the highest
    return highestGrade;
}

