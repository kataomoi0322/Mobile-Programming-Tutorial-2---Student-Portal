public class StringConstructLength {
    public static void main(String[] args) {
        int num = 123;
        double price = 45.67;
        char grade = 'A';

        String s1 = String.valueOf(num);
        String s2 = String.valueOf(price);
        String s3 = String.valueOf(grade);

        System.out.println("Number as String: " + s1);
        System.out.println("Price as String: " + s2);
        System.out.println("Grade as String: " + s3);
    }
}


  /*
   * Exercise 1 – Constructing a String and Length
Create a program that demonstrates constructing strings using literals and the new keyword, then print their lengths.
public class StringConstructLength {
    public static void main(String[] args) {
        String s1 = "Hello";
        String s2 = new String("World");

        System.out.println("s1 length: " + s1.length());
        System.out.println("s2 length: " + s2.length());
    }
}
________________________________________
Exercise 2 – Retrieving Characters
Write a program that prints each character of a word along with its index.
public class StringCharacters {
    public static void main(String[] args) {
        String text = "Programming";
        for (int i = 0; i < text.length(); i++) {
            System.out.println("Character at index " + i + ": " + text.charAt(i));
        }
    }
}
________________________________________
Exercise 3 – Concatenation
Demonstrate string concatenation using both + operator and concat() method.
public class StringConcatenation {
    public static void main(String[] args) {
        String first = "Java";
        String second = "Programming";

        String result1 = first + " " + second;
        String result2 = first.concat(" ").concat(second);

        System.out.println("Using + : " + result1);
        System.out.println("Using concat() : " + result2);
    }
}
________________________________________
Exercise 4 – Substrings
Extract part of a string using substring().
public class StringSubstring {
    public static void main(String[] args) {
        String text = "Universiti Teknologi Malaysia";
        String sub1 = text.substring(0, 10);
        String sub2 = text.substring(11);

        System.out.println("Substring 1: " + sub1);
        System.out.println("Substring 2: " + sub2);
    }
}
________________________________________
Exercise 5 – Comparisons
Compare strings using equals(), equalsIgnoreCase(), and compareTo().
public class StringComparison {
    public static void main(String[] args) {
        String a = "Java";
        String b = "java";

        System.out.println("equals: " + a.equals(b));
        System.out.println("equalsIgnoreCase: " + a.equalsIgnoreCase(b));
        System.out.println("compareTo: " + a.compareTo(b));
    }
}
________________________________________
Exercise 6 – Conversions
Demonstrate string conversions: uppercase, lowercase, and trimming spaces.
public class StringConversion {
    public static void main(String[] args) {
        String text = "   Welcome to Java   ";

        System.out.println("Uppercase: " + text.toUpperCase());
        System.out.println("Lowercase: " + text.toLowerCase());
        System.out.println("Trimmed: '" + text.trim() + "'");
    }
}
________________________________________
Exercise 7 – Finding Characters and Substrings
Find the first and last occurrence of a substring and retrieve a character at a given index.
public class StringFinding {
    public static void main(String[] args) {
        String text = "I am learning Java programming in Java course";

        System.out.println("First index of 'Java': " + text.indexOf("Java"));
        System.out.println("Last index of 'Java': " + text.lastIndexOf("Java"));
        System.out.println("Character at index 5: " + text.charAt(5));
    }
}
________________________________________
Exercise 8 – Converting Numbers and Characters to Strings
Convert integers, doubles, and characters to strings using String.valueOf().
public class StringValueOf {
    public static void main(String[] args) {
        int num = 123;
        double price = 45.67;
        char grade = 'A';

        String s1 = String.valueOf(num);
        String s2 = String.valueOf(price);
        String s3 = String.valueOf(grade);

        System.out.println("Number as String: " + s1);
        System.out.println("Price as String: " + s2);
        System.out.println("Grade as String: " + s3);
    }
}

   * 
   * 
   */