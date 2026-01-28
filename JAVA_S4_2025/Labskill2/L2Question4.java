/*Lab Skill 2 - Question 4
Name		: Lee Xuan hui
Date		: 21 August 2025
*/
public class L2Question4 {
    public static class Account{
        String id;
        String name;
        double balance;

        public Account(String id, String name) {
            this.id = id;
            this.name=name;
        }

        public Account(String id, String name,double balance) {
            this.id = id;
            this.name = name;
            this.balance = balance;
        }
        
        
        public String getId(){
            return id;
        }
        
        public String getName(){
            return name;
        }
        public double getBalance(){
            return balance;
        }
        
        public double credit(double amount){
            return balance + amount;
        }

        public double debit(double amount){
            if(amount <= balance){
                balance -= amount;
            }else{
                System.out.println("Amount Exceeded");
            }

            return balance;
        }

        public double transferTo(Account another, double amount){
            if (amount <= balance){
                another.balance += amount;
                balance -= amount;
            }else{
                
                System.out.println("Amount Exceeded");
            }
            return balance ;
        }

        public String toString(){
            String Text = "=== Account Info=== "+"\n" 
                 + "Account id :" +id+"\n" 
                 + "Name: "+name+"\n"
                 + "Balance:"+balance+"\n"
                 +"=== End Info ===";
            return Text;
        }
    }

    public static void main(String[] args) {
        Account acc1 = new Account("AC01","Ahmad",1260.00);
        System.out.println(acc1.toString());

        System.out.println("Debit from AC01 RM 1500.00");
        acc1.debit(1500.00);

        System.out.println("Credit from AC01 RM 1500.00");
        acc1.credit(1500.00);

        Account acc2 = new Account("AC02","Aisyah",7300.00);
        System.out.println(acc2.toString());
        
        System.out.println("Transfer RM 1000 from AC02 to AC01");
        acc2.transferTo(acc1,1000.00);

        
        System.out.println("\n========Final Balance==========");
        System.out.println("AC01 new balance : RM"+acc1.getBalance());
        System.out.println("AC02 new balance : RM"+acc2.getBalance());
    }
}
