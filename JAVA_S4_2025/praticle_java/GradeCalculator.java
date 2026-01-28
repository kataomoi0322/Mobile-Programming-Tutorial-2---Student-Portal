import java.util.Scanner;
 
public class GradeCalculator { 
    public static void main(String[] args) { 
        Scanner input = new Scanner(System.in); 
        int[] marks = new int[3]; int total = 0; 
        System.out.println("Enter 3 subject marks:"); 
        for (int i = 0; i < marks.length; i++) { 
            marks[i] = input.nextInt();
            total += marks[i]; 
        } 
        double average = total / 3.0; 
        if (average >= 80) { 
            System.out.println("Grade: A"); 
        } else if (average >= 65) { 
            System.out.println("Grade: B"); 
        } else if (average >= 50) { 
            System.out.println("Grade: C"); 
        } else { System.out.println("Grade: F"); } 
    } 
}