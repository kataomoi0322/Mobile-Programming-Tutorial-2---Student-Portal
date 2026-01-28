import java.util.ArrayList;
import java.util.Scanner;

// Base class
abstract class Product {
    protected int id;
    protected String name;
    protected double price;

    public Product(int id, String name, double price) {
        this.id = id;
        this.name = name;
        this.price = price;
    }

    public String getName() {
        return name;
    }

    public abstract void display();
}

// Book subclass
class Book extends Product {
    private String author;

    public Book(int id, String name, double price, String author) {
        super(id, name, price);
        this.author = author;
    }

    @Override   
    public void display() {
        System.out.println("Book [ID=" + id + ", Name=" + name +
                           ", Price=" + price + ", Author=" + author + "]");
    }
}

// Electronics subclass
class Electronics extends Product {
    private String brand;

    public Electronics(int id, String name, double price, String brand) {
        super(id, name, price);
        this.brand = brand;
    }

    @Override
    public void display() {
        System.out.println("Electronics [ID=" + id + ", Name=" + name +
                           ", Price=" + price + ", Brand=" + brand + "]");
    }
}

public class InventorySystem {
    private static ArrayList<Product> products = new ArrayList<>();
    private static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int choice;
        do {
            System.out.println("\n--- Bookstore Inventory System ---");
            System.out.println("1. Add Product");
            System.out.println("2. Display Products");
            System.out.println("3. Search Product by Name");
            System.out.println("4. Exit");
            System.out.print("Enter choice: ");
            choice = sc.nextInt();
            sc.nextLine(); // consume newline

            switch (choice) {
                case 1: addProduct(); break;
                case 2: displayProducts(); break;
                case 3: searchProduct(); break;
                case 4: System.out.println("Exiting..."); break;
                default: System.out.println("Invalid choice!");
            }
        } while (choice != 4);
    }

    private static void addProduct() {
        System.out.println("Choose product type: 1. Book  2. Electronics");
        int type = sc.nextInt();
        sc.nextLine(); // consume newline

        System.out.print("Enter ID: ");
        int id = sc.nextInt();
        sc.nextLine();

        System.out.print("Enter Name: ");
        String name = sc.nextLine();

        System.out.print("Enter Price: ");
        double price = sc.nextDouble();
        sc.nextLine();

        if (type == 1) {
            System.out.print("Enter Author: ");
            String author = sc.nextLine();
            products.add(new Book(id, name, price, author));
        } else if (type == 2) {
            System.out.print("Enter Brand: ");
            String brand = sc.nextLine();
            products.add(new Electronics(id, name, price, brand));
        } else {
            System.out.println("Invalid product type!");
        }
    }

    private static void displayProducts() {
        if (products.isEmpty()) {
            System.out.println("No products in inventory.");
        } else {
            System.out.println("\n--- Product List ---");
            for (Product p : products) {
                p.display();
            }
        }
    }

    private static void searchProduct() {
        System.out.print("Enter product name to search: ");
        String searchName = sc.nextLine();

        boolean found = false;
        for (Product p : products) {
            if (p.getName().equalsIgnoreCase(searchName)) {
                p.display();
                found = true;
            }
        }
        if (!found) {
            System.out.println("Product not found.");
        }
    }
}
