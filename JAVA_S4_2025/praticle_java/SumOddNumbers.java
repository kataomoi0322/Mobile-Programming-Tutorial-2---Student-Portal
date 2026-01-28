import java.util.Scanner; 
public class SumOddNumbers { 
    public static void main(String[] args) {
    Scanner input = new Scanner(System.in); 
    System.out.print("Enter a number: "); 
    int n = input.nextInt(); int total = sumOdd(n); 
    System.out.println("Sum of odd numbers from 1 to " + n + " is " + total); 
    } 
    public static int sumOdd(int limit) { 
        int sum = 0; for (int i = 1; i <= limit; i++) { 
            if (i % 2 != 0) { sum += i; } 
        } return sum; 
    } 
}