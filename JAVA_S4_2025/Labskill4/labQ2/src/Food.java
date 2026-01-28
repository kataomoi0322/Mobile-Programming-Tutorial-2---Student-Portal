public class Food extends Product {
    private final int calories;

    public Food(String description, double price, int calories) {
        super(description, price);
        this.calories = calories;
    }

    public int getCalories(){ return calories; }

    @Override
    public String display() {
        return String.format("Food: %s\nPrice: %.2f\nCalories: %d", description, price, calories);
    }
}
