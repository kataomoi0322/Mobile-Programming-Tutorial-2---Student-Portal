/*Lab Skill 4 - Question 2
Name		: Lee Xuan Hui
Date		: 15 October 2025*/


public class TestProduct {
    public static void main(String[] args) {
        Product [] inventory= new Product [6];
        inventory [0] = new Food ("Meat", 14.40, 2000);
        inventory [1] = new Food ("Banana", 1.50, 500);
        inventory [2] = new MotorVehicle ("Car", 55000.00, "Myvi");
        inventory [3] = new MotorVehicle ("Motor", 12000.00, "Yamaha");
        inventory [4] = new Gasoline ("Petrol 95", 25.90, "Petronas");
        inventory [5] = new Gasoline ("Diesel", 13.85, "Shell"); 
            for (Product p : inventory) {
                System.out.println(p.display());
                System.out.println();
            }

    }
}
