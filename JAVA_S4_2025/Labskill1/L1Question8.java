/* Lab Skill 1 Question 8
 * Name : Lee Xuan Hui
 * Date : 10 August
 */

import java.text.DecimalFormat;
import javax.swing.JOptionPane;

public class L1Question8 {
    public static void main(String[] args) {
        double [] price = new double[5];
        double [] tax = new double[5];
        
        String name = JOptionPane.showInputDialog(null,
        "Enter Product Name: ",
        "input",
        JOptionPane.QUESTION_MESSAGE);

        String input1 = JOptionPane.showInputDialog(null,
        "Enter Price",
        "input",
        JOptionPane.QUESTION_MESSAGE);

        price[0] = Double.parseDouble(input1);

        double totalPrice = 0;
        int showTax = 0;

        if(price[0] < 500){
            tax[0] = 0.02;
            showTax = 2;
        }else if(price[0] >= 500 && price[0] <2500){
            tax[0] = 0.08;
            showTax = 8;
        }else if(price[0] >=2500){
            tax[0] = 0.20;
            showTax = 20;
        }
        
        DecimalFormat df = new DecimalFormat("0.00");
        totalPrice =  (price[0] * tax[0]) + price[0];
        System.out.println(price[0]);
        System.out.println(tax[0]);
        System.out.println("Your " + name + " price after " + showTax + "% tax" + "is " + df.format(totalPrice));

        System.exit(0);
    }
}
