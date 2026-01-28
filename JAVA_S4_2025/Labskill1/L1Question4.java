/* Lab Skill 1 Question 4
 * Name : Lee Xuan Hui
 * Date : 10 August
 */

import java.util.Scanner;

public class L1Question4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter your radius: ");
        double radius = scanner.nextDouble();
        double area = 3.142 * radius * radius;
        System.out.println("The Area is " + area);
        System.exit(0);
    }
}
