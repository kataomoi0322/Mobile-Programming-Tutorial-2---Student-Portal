import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;

public class DateExample {
    public static void main(String[] args) {
        Date now = new Date();

        // Current date and time
        System.out.println("Current Date and Time: " + now);

        // Current year
        Calendar calendar = Calendar.getInstance();
        calendar.setTime(now);
        int year = calendar.get(Calendar.YEAR);
        System.out.println("Current Year: " + year);

        // Format date
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        String formattedDate = sdf.format(now);
        System.out.println("Formatted Date: " + formattedDate);
    }
}
