import java.util.Scanner;
public class EvenArray { 
    public static void main(String[] args) {
         Scanner input = new Scanner(System.in);
          int[] numbers = new int[5]; 
          System.out.println("Enter 5 numbers:");
           for (int i = 0; i < numbers.length; i++) { 
            numbers[i] = input.nextInt(); 
          }
          input.close(); 
        System.out.println("Even numbers are:"); 
        for (int i = 0; i < numbers.length; i++) {
             if (numbers[i] % 2 == 0) { 
                System.out.println(numbers[i]); 
            } 
        }
     } 
    }