/*Lab Skill 3 - Question 2
Name		: Lee Xuan Hui
Date		: 11 September 2025*/

import java.util.Scanner;

public class Q2labskill3 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Please enter your first name");
        String firstName =scanner.next();
        System.out.println("Please enter your second name");
        String secondName=scanner.next();

        System.out.println("The length of the first name is "+firstName.length()+" and length for the second length is "+secondName.length());
        
        if(firstName.compareTo(secondName)==0){
            System.out.println("Same value enter for first name and second name");
        }

        System.out.println("first name after to upper"+firstName.toUpperCase());
        System.out.println("second name after to upper"+secondName.toUpperCase());
        System.out.println("first name after to lower"+firstName.toLowerCase());
        System.out.println("second name after to lower"+firstName.toLowerCase());

        scanner.close();

    }
    
}
