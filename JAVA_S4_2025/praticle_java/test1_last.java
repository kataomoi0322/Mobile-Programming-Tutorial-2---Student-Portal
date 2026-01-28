package Labskill4.Q2;

public class test1_last {
    public static void main(String[] args) {
        String msg = "A123";
        char op;
        int count = 0;

        for(int i = 0;i<msg.length();i++){
            op = msg.charAt(i);
            if(Character.isDigit(op)){
                count++;
            }
        }

        System.out.println(count);
    }
}
