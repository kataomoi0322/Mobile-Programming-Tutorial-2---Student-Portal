/*
 * Name : lee xuan hui
 * matric : A24DW0423
 * Lecture Name : sir Hafiz Afiq
 */
import javax.swing.JOptionPane;

public class lesson1And1 {
    
    public static void main(String[] args) {
        final double PI = 3.142;
        double radius,area, cm;
        String radiusStr;
        radiusStr = JOptionPane.showInputDialog(null,
            "enter radius",
            "example 3 getting input",
            JOptionPane.QUESTION_MESSAGE);
        radius = Double.parseDouble(radiusStr);
        area = PI * radius * radius;
        cm = 2.0 * PI * radius;

        JOptionPane.showMessageDialog(null,
        "radius"+radius+"\n" +
        "Area"+area+"\n" +
        "Circumference"+cm+"\n" ,
        "Example 3: Compute area and cm",
        JOptionPane.INFORMATION_MESSAGE);

        System.exit(0);
    }
    
}