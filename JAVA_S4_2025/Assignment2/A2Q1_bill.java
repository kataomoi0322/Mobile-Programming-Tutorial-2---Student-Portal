/*Assignment 2 - Question 1
Name : lee xuan hui
Date : 16 October 2019*/
import java.text.DecimalFormat;
import java.util.Scanner;

public class A2Q1_bill{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("ELECTRO BILLING SYSTEM");
        System.out.println("======================");
        System.out.print("Enter Customer Account Number:");
        String CustomerAcount = scanner.nextLine();

        System.out.print("Enter Last Meter Reading in KWH:");
        double LastMeter = scanner.nextDouble();

        System.out.print("Enter Current Meter Reading in KWH:");
        double CurrentMeter = scanner.nextDouble();
        
        System.out.print("Enter Overdue Amount(if any):RM");
        double Overdue = scanner.nextDouble();
        
        DecimalFormat df1 = new DecimalFormat("#.00");
        DecimalFormat df2 = new DecimalFormat("#");
        double Paymeter = CurrentMeter - LastMeter;
        scanner.close();
        char state = CustomerAcount.charAt(8);
        double credit = 0.00;
        String StateArea = "";

        switch (state) {
            case 'K':
            case 'k':
                credit =15.00;
                StateArea ="Kuala Lumpur"; 
                break;
            case 'S':
            case 's':
                credit =20.00; 
                StateArea = "Selangor";
                break;
            case 'P':
            case 'p':
                credit =18.00; 
                StateArea = "Putrajaya";
                break;
            case 'T':
            case 't':
                credit =21.00; 
                StateArea = "Terengganu";
                break;
            case 'L':
            case 'l':
                credit =12.00; 
                StateArea = "Labuan";
                break;
            case 'J':
            case 'j':
                credit =25.00; 
                StateArea = "Johor";
                break;
            case 'O':
            case 'o':
                credit =19.00; 
                StateArea = "Other state";
                break;
            default:
                System.out.println("please enter a valid input");
        }
        double payment = Paymeter * 0.53;
        double amountToPay = payment + Overdue - credit;
        System.out.println("YOUR BILL INFORMATION");
        System.out.println("=====================");

        System.out.println("\nCustomer Account Number:"+CustomerAcount);
        System.out.println("State:"+StateArea);
        System.out.println("Electric Usage in KWH:"+ df2.format(Paymeter));
        System.out.println("Current Bill:"+df1.format(payment));
        System.out.println("Overdue Form Last Month:"+df1.format(Overdue));
        System.out.println("Free Electric Credit:"+df1.format(credit));
        System.out.println("Amount To Pay:"+df1.format(amountToPay));

        System.exit(0);

    }
}