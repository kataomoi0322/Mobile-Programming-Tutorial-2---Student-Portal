import javax.swing.JOptionPane;

public class ImportFormDialogBox {
    public static void main(String[] args) {
        final double PI = 3.14;
        double radius, area, cm;
        String radiusStr;
        radiusStr = JOptionPane.showInputDialog(null,
        "enter radius",
        "Example 3:Get input",
        JOptionPane.QUESTION_MESSAGE);
        radius =Double.parseDouble(radiusStr);
        area = PI * radius * radius;
        cm = 2.0 * PI * radius;

        JOptionPane.showMessageDialog(null,
         "radius "+radius+"\n"+
         "Area: " + area + "\n" +
         "Circumference: " + cm,
         "Example 3: Compute area and circumference",
         JOptionPane.INFORMATION_MESSAGE);

         System.exit(0);
    }
}
