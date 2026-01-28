public class CD extends Retailitem{
        String title;
        int quality;
        double price;

        public CD(){
            title = "";
            quality = 0;
            price = 0.00;
        }

        public void setTitle(String title){
            this.title = title;
        }

        public void setQuality(int quality){
            this.quality = quality;
        }

        public void setPrice(double price){
            this.price = price;
        }

        public String toString(){
            return "The title of the CD:"+title+"\n"+
                   "The quality of the CD:"+quality+"\n"+
                   "The price of the CD"+price+"\n"+
                   "The item id"+itemID+"\n";
        }

        @Override
        public double calculateSalesAmount(){
            return price * quality;
        }
    }
 