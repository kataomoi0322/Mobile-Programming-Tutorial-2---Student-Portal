import javax.swing.JOptionPane;

public class testing {
    public static void main(String[] args) {
        System.out.println("HELLO WORLD");
        ShowBox();
        System.exit(0);
    }
    public static void ShowBox(){
        JOptionPane.showInputDialog(null,
        "Boundaries",
        "Welcome to the new world",
        JOptionPane.WARNING_MESSAGE);
    }
}
