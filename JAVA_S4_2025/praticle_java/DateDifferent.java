import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

public class DateDifferent {
    public static void main(String[] args) throws Exception {
        Scanner input = new Scanner(System.in);
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");

        System.out.print("Enter first date (dd/MM/yyyy): ");
        Date date1 = sdf.parse(input.nextLine());

        System.out.print("Enter second date (dd/MM/yyyy): ");
        Date date2 = sdf.parse(input.nextLine());

        // Difference in milliseconds
        long diff = date2.getTime() - date1.getTime();

        // Convert to days
        long daysDiff = diff / (1000 * 60 * 60 * 24);
        System.out.println("Difference in days: " + Math.abs(daysDiff));

        input.close();
    }
}
