import java.util.Scanner; 
public class PrimeCheck { 
    public static void main(String[] args) {
         Scanner input = new Scanner(System.in); 
         System.out.print("Enter a number: ");
         int num = input.nextInt();
         if (isPrime(num)) { 
            System.out.println(num + " is a prime number."); 
        } else { 
            System.out.println(num + " is not a prime number."); 
        } } 
        
public static boolean isPrime(int number) {
     if (number <= 1) return false;
      for (int i = 2; i < number; i++) {
         if (number % i == 0) return false; 
        } return true; 
    } 
}