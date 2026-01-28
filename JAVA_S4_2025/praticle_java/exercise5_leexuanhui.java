import javax.swing.JOptionPane;

public class exercise5_leexuanhui{ 
    public static void main(String[] args) {
        String input1 = JOptionPane.showInputDialog(null,
        "Enter multiple constant",
        "input",
        JOptionPane.QUESTION_MESSAGE);

        String input2 = JOptionPane.showInputDialog(null,
        "Enter times",
        "input",
        JOptionPane.QUESTION_MESSAGE);

        int n = Integer.parseInt(input1);
        int j = Integer.parseInt(input2);
        int result = 0;

        StringBuilder output = new StringBuilder();
        for (int i = 1; i <= j; i++) {
            result = i * n;
            output.append(i).append(" * ").append(n).append(" = ").append(result).append("\n");
        }
        JOptionPane.showConfirmDialog(null, output.toString(),"answer",JOptionPane.INFORMATION_MESSAGE);
        System.exit(0);

    }
}
