import java.util.Scanner;

public class StringStudent {
    public static void main(String[] args) {
        String name1;
        String name2;

        Scanner scanner = new Scanner(System.in);

        System.out.print("Please enter first student name: ");
        name1 = scanner.nextLine();
        
        System.out.print("Please enter second student name: ");
        name2 = scanner.nextLine();
        scanner.close();
        // Display full name
        System.out.println("First student name: " + name1 + " Second student name: " + name2);

        // Length of names
        System.out.println("Length of first name: " + name1.length()+ " Length of second name: " + name2.length());
        // First and last character
        System.out.println("First char of " + name1 + ": " + name1.charAt(0));
        System.out.println("Last char of " + name1 + ": " + name1.charAt(name1.length()-1));
        System.out.println("First char of " + name2 + ": " + name2.charAt(0));
        System.out.println("Last char of " + name2 + ": " + name2.charAt(name2.length()-1));

        // Uppercase and lowercase
        System.out.println(name1 + " in uppercase: " + name1.toUpperCase());
        System.out.println(name2 + " in lowercase: " + name2.toLowerCase());

        // Compare string
        if (name1.equals(name2)) {
            System.out.println("Both names are the same.");
        } else {
            System.out.println("The names are different.");
        }

        
    }
}
