public class Item extends Stock implements Comparable<Item> {
    private int quantity;
    private double pricePerItem;

    public Item(String partNumber, int quantity, double pricePerItem) {
        super(partNumber);
        this.quantity = quantity;
        this.pricePerItem = pricePerItem;
    }

    public int getQuantity() {
        return quantity;
    }

    public double getPricePerItem() {
        return pricePerItem;
    }

    @Override
    public double getTotalCost() {
        return quantity * pricePerItem;
    }

    // Return formatted multi-line details similar to sample output
    public String detailsString() {
        StringBuilder sb = new StringBuilder();
        sb.append("PartNumber : ").append(partNumber).append(System.lineSeparator());
        sb.append("Quantity: ").append(quantity).append(System.lineSeparator());
        sb.append(String.format("PricePerItem: RM%.2f", pricePerItem)).append(System.lineSeparator());
        sb.append(String.format("Total Cost: RM%.2f", getTotalCost()));
        return sb.toString();
    }

    @Override
    public int compareTo(Item other) {
        return Double.compare(this.pricePerItem, other.pricePerItem);
    }
}
