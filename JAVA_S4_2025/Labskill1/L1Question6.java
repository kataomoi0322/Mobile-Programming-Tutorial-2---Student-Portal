/* Lab Skill 1 Question 6
 * Name : Lee Xuan Hui
 * Date : 10 August
 */

import java.text.DecimalFormat;
import java.util.Scanner;

public class L1Question6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter your product name:");
        String name = scanner.nextLine();
        System.out.print("Enter your Product price: ");
        double price = scanner.nextDouble();
        double tax = 0; 
        double totalPrice = 0;
        int showTax = 0;

        if(price >= 150 && price < 500){
            tax = 0.05;
            showTax = 5;
        }else if(price >= 500 && price <1200){
            tax = 0.1;
            showTax = 10;
        }else if(price >=1200){
            tax = 0.15;
            showTax = 15;
        }
        
        DecimalFormat df = new DecimalFormat("0.00");
        totalPrice =  (price * tax) + price;
        System.out.println("Your " + name + "price after " + showTax + "% tax" + "is " + df.format(totalPrice));
        System.exit(0);
    }
}

