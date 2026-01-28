/*Lab Skill 2 - Question 2
Name		: Lee Xuan hui
Date		: 21 August 2025
*/
public class L2Question2 {
    public static class Sales{
        int quantity = 0;
        double price = 0;
        double totalPrice = 0;
        double tax = 0;
        double nettPrice = 0;

        public Sales(){
            quantity = 0;
            quantity = 0;
            price = 0;
            totalPrice = 0;
            tax = 0;
            nettPrice = 0;
        }

        public Sales(int quantity,double price ){
            this.quantity =quantity;
            this.price=price;
        }

        public int getQuantity(){
            return quantity;
        }

        public void setQuantity(int quantity){
            this.quantity=quantity;
        }

        public double getPrice(){
            return price;
        }

        public void setPrice(double price){
            this.price=price;
        }

        public double getTax(){
            totalPrice = price *quantity;
            tax = 0.06 * totalPrice;
            return 0.06 * totalPrice;
        }

        public double getNettPrice(){ 
            return tax + totalPrice;
        }

        public double displaySales(){
            return totalPrice;
        }
    }

    public static void main(String[] args) {
        Sales sales1 = new Sales();
        Sales sales2 = new Sales();

        sales1.setPrice(10);
        sales1.setQuantity(10);
        System.out.println("the price of the sales is" + sales1.price +
        " the quantity of the sales is " + sales1.quantity);
    }
}
