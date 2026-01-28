/*Lab Skill 3 - Question 4
Name		: Lee Xuan Hui
Date		: 11 September 2025*/

import java.util.Scanner;

public class Q4labskill3 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Please enter your first word");
        String first =scanner.next();
        System.out.println("Please enter your second word");
        String second=scanner.next();
        
        first = first.toUpperCase();
        second = second.toUpperCase();

        if(first.compareTo(second)==0){
            System.out.println("Same value enter for first word and second word");
        }else{
            System.out.println("That is different");
        }

        scanner.close();

    }
}
