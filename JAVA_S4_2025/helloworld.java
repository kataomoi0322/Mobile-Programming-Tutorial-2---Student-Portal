import javax.swing.JOptionPane;
public class helloworld{
    public static void main (String[] args){
        String input1 = JOptionPane.showInputDialog(null,"please enter the number that you want","question",JOptionPane.INFORMATION_MESSAGE);
        String input2 = JOptionPane.showInputDialog(null,"please enter the base that you want","question",JOptionPane.INFORMATION_MESSAGE) ;


        int number = Integer.parseInt(input1);
        int base = Integer.parseInt(input2);

        StringBuilder result = new StringBuilder();
        for(int i = 1; i <= number;i++){
            int answer = i * base;
            result.append(i).append(" * ").append(base).append(" = ").append(answer).append("\n");
        }
    

        JOptionPane.showMessageDialog(null,result,"result",JOptionPane.INFORMATION_MESSAGE);

    }

}