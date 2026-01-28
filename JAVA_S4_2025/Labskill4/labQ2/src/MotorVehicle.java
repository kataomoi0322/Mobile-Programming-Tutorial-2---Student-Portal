public class MotorVehicle extends Product implements Taxtable {
    private final String MotorType;

    public MotorVehicle(String description, double price, String MotorType) {
        super(description, price);
        this.MotorType = MotorType;
    }

    public String getMotorType(){ return MotorType; }

    @Override
    public double calcTax() {
        return price * MotorVehicleTaxRate;
    }

    @Override
    public String display() {
        return String.format("MotorVehicle: %s\nMotor Type: %s\nPrice: %.2f\nTax: %.2f", description, MotorType, price, calcTax());
    }
}
