/* Lab Skill 1 Question 2
 * Name : Lee Xuan Hui
 * Date : 10 August
 */

import java.util.Scanner;

public class L1Question2 {
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        System.out.print("please enter a book title:");
        String name = input.nextLine();
        input.close();
        System.out.println("Thank for you buying "+name);
        System.exit(0);
    }
}
