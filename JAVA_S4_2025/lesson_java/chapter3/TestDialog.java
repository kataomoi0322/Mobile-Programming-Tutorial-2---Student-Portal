import java.text.DecimalFormat;
import javax.swing.JOptionPane;

public class TestDialog {
    public static void main(String[] args) {
        DecimalFormat df = new DecimalFormat("0.00");
        double num = 0.985680;
        System.out.println("Result is :" +df.format(num));
        JOptionPane.showMessageDialog(null, df.format(num));
    }
}
