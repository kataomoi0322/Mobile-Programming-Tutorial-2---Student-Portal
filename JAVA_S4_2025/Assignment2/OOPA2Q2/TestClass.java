/*Assignment 2 - Question 2
Name : lee xuan hui
Date : 16 October 2019*/
import java.util.Scanner;

public class TestClass {
    public static void main(String[] args) {
        int size = 10;
        Teacher[] teachers = new Teacher[size];
        Scanner scanner = new Scanner(System.in);
        double totalSalary = 0;
        double averageSalary;
        double higherSalary;
        int countHigher = 0 ;
        int countLower = 0;

        for (int i = 0; i < size; i++) {
            System.out.print("Enter Teacher name: ");
            String name = scanner.nextLine();

            System.out.print("Enter Teacher address: ");
            String address = scanner.nextLine();

            System.out.print("Enter Teacher school: ");
            String school = scanner.nextLine();

            System.out.print("Enter Teacher salary: ");   
            double salary = scanner.nextDouble();
            scanner.nextLine();

            teachers[i]=new Teacher(name,address,school,salary);
            System.out.println(teachers[i].toString());
        }  

        for (int i = 0; i < size; i++) {
            totalSalary += teachers[i].getSalary();
        } 

        averageSalary = totalSalary / size;
        System.out.println("The total Salary: "+totalSalary);
        System.out.println("The average salary is"+averageSalary);
        for (int i = 0; i < size; i++) {
            if(teachers[i].getSalary() > averageSalary){
                countHigher++;
            }else{
                countLower++;
            }
        } 
        
        System.out.println("number of teacher that more than average salary is "+countHigher+"\nnumber of teacher that less than average salary is "+countLower);
        
        for (int i = 0; i < size-1; i++) {
            int result = teachers[i].compareTo(teachers[i+1]);
            System.out.println("Result comparison:"+result);
        }
        higherSalary = teachers[0].getSalary();

        for (int i = 0; i < size; i++) {
            if(teachers[i].getSalary() > higherSalary){
                higherSalary = teachers[i].getSalary();
            }
        }

        System.out.println("Highest Salary:"+higherSalary);
        scanner.close();
        System.exit(0);
    }
}
