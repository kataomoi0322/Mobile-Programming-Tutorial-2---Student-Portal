public class Gasoline extends Product implements Taxtable{
    private final String type;

    public Gasoline(String description, double price, String type) {
        super(description, price);
        this.type = type;
    }

    public String getType(){ return type; }

    @Override
    public double calcTax() {
        return price * GasTaxRate;
    }

    @Override
    public String display() {
        return String.format("Gasoline: %s\nBrand: %s\nPrice: %.2f\nTax: %.2f", description, type, price, calcTax());
    }
}
