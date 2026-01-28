public class Product {
    protected String description;
    protected double price;

    public Product() { }

    public Product(String description, double price) {
        this.description = description;
        this.price = price;
    }

    public double getPrice() { return price; }

    public String display() {
        return "Description of the product: " + description + "\n" + "Price: " + price;
    }
}
