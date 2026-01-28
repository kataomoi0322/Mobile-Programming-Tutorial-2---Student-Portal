import java.util.Scanner;
 public class MaxValue {
    public static void main(String[] args) { 
        Scanner input = new Scanner(System.in); 
        int[] values = new int[4]; 
        System.out.println("Enter 4 numbers:"); 
        for (int i = 0; i < values.length; i++) {
             values[i] = input.nextInt();
        } 
        int max = findMax(values);
        System.out.println("Maximum value is: " + max); 
    } 
    public static int findMax(int[] data) {
        int max = data[0];
        for (int i = 1; i < data.length; i++) {
             if (data[i] > max) {
                 max = data[i];
                }
     } return max; 
    } 
}