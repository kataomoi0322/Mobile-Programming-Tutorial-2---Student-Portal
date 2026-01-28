import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;

public class dateExample1 {
    public static void main(String[] args) {
        Date date = new Date();

        System.out.println("Currents Date and time : " + date);

        Calendar calendar = Calendar.getInstance();
        calendar.setTime(date);
        int year = calendar.get(Calendar.YEAR);
        System.out.println("Current Year: " + year);

        SimpleDateFormat  dateFormat = new SimpleDateFormat("dd/MM/yyyy");
        String formatDate = dateFormat.format(date);
        System.out.println("formatted date : " + formatDate);

        System.exit(0);
    }
}
