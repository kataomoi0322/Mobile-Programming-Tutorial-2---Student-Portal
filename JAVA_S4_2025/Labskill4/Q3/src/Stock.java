public class Stock {
    protected String partNumber;

    public Stock(String partNumber) {
        this.partNumber = partNumber;
    }

    public double getTotalCost() {
        return 0.0;
    }

    @Override
    public String toString() {
        return "PartNumber : " + partNumber;
    }
}
