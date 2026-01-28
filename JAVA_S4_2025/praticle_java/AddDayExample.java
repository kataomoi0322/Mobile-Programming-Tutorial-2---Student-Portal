import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Scanner;

public class AddDayExample {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Calendar cal = Calendar.getInstance();

        System.out.print("Enter number of days to add: ");
        int days = input.nextInt();

        // Add days
        cal.add(Calendar.DAY_OF_MONTH, days);

        // Format and display result
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        System.out.println("New Date: " + sdf.format(cal.getTime()));

        input.close();
    }
}
