/* Lab Skill 1 Question 5
 * Name : Lee Xuan Hui
 * Date : 10 August
 */

import java.text.DecimalFormat;
import javax.swing.JOptionPane;

public class L1Question5 {
    public static void main(String[] args) {

        String name = JOptionPane.showInputDialog(null,
        "Enter Book title",
        "input",
        JOptionPane.QUESTION_MESSAGE);

        String input1 = JOptionPane.showInputDialog(null,
        "Enter quantity",
        "input",
        JOptionPane.QUESTION_MESSAGE);

        String input2 = JOptionPane.showInputDialog(null,
        "Enter Unit Price",
        "input",
        JOptionPane.QUESTION_MESSAGE);

        double quantity = Double.parseDouble(input1);
        double price = Double.parseDouble(input2);

        double grocePrice = quantity * price;
        double discount = grocePrice * 0.10 ;
        double payment =  grocePrice - discount;
        DecimalFormat df = new DecimalFormat("0.00");


        JOptionPane.showMessageDialog(null,
        "Name: " + name + "\n" +
        "Gross Price: " + df.format(grocePrice) + "\n" +
        "Discount: " + df.format(discount) + "\n" +
        "Payment due: " + df.format(payment),
        "message",
        JOptionPane.INFORMATION_MESSAGE);
    }
}