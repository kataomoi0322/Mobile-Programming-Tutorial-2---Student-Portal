import javax.swing.JOptionPane;

public class testing123 {
    public static void main(String[] args) {
        String[] name = new String[10];
        double[] mark = new double[10];
        String temp ="";
        double totalMark = 0.00;
        
        int size = 2;
        for(int i = 0; i < size; i++){
            name[i] = JOptionPane.showInputDialog(null,"Please enter student name");
            
            temp = JOptionPane.showInputDialog(null,"please enter student's mark");

            mark[i]= Double.parseDouble(temp);

            totalMark += mark[i];
        }
        double highestMark = mark[0];
        double lowestMark = mark[0];
        double averageMark = totalMark / size;
        int count = 0;

        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < size; i++) {
            if (mark[i]> highestMark){
                highestMark = mark[i];
            }

            if (mark[i]< lowestMark){
                lowestMark = mark[i];
            }
            totalMark += mark[i];

            if(mark[i] > averageMark){
                count++;
            }

            sb.append("Student name ").append(name[i]).append(" and mark is ").append(mark[i]).append("\n");
        }
        sb.append("The highest mark is ").append(highestMark).append(" and the lowest mark is").append(lowestMark).append("\n");
        sb.append("Average mark is").append(averageMark);
        sb.append("\nThat are ").append(count).append(" student more than average mark");

        JOptionPane.showMessageDialog(null, sb);

    }
}
