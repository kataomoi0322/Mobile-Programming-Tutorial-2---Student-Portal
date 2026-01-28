public class Retailitem{
        protected String itemID;

        public Retailitem() {
            itemID = "I001 ";
        }

        public void setItemID(String itemID){
            this.itemID = itemID;
        }

        public double calculateSalesAmount(){
            return 0.00;
        }

        @Override
        public String toString(){
            return "The item ID is :"+itemID;
        }
        
}