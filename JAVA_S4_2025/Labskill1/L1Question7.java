/* Lab Skill 1 Question 7
 * Name : Lee Xuan Hui
 * Date : 10 August
 */

import javax.swing.JOptionPane;
public class L1Question7 {
    public static void main(String[] args) {
        String output = "";
        
        for (int i = 1; i <= 20; i++) {
            output += "Number " + i + "\n";
        }
        
        JOptionPane.showMessageDialog(null,
        output,
        "Message", 
        JOptionPane.INFORMATION_MESSAGE);
    }
}
