/*
Case Study 2 – Library Book Search System
The university library wants to provide a feature for searching books. When a user enters a
book title:
1. The program must allow concatenation of the book title with the word “ - Available”.
2. Extract a substring from the book title (for example, the first 5 characters).
3. Find the first occurrence and last occurrence of the word “Java” in the title.
4. Display each character in the title along with its index position.
Question:
Write a Java program to demonstrate these string operations for the library book search
system.
Paste your answer below
*/
import java.util.Scanner;

public class LibrarySystem {
    public static void main(String[] args) {
        String book;
        Scanner scanner = new Scanner(System.in);
        System.out.println("please enter a book title");
        book = scanner.nextLine();
        scanner.close();
        System.out.println(book + " - Available");
        //sub string
        String subString = book.substring(0,4);
        System.out.println("first 5 character:" + subString);

        int firstIndex = book.indexOf("Java");
        int lastIndex = book.lastIndexOf("Java");
        
        System.out.println("first occurrence of 'Java' is "+firstIndex);
        System.out.println("last occurrence of 'Java' is "+lastIndex);

        System.out.println("each character in the title along with its index position.");
        for (int i = 0; i < book.length(); i++) {
            System.out.println("index "+i+": "+book.charAt(i));
        }
        

    }
}
