import java.util.Scanner;

public class InputFromConsole {
    public static void main(String[] args){
        // final = const
        final double PI = 3.14;
        double radius, area, circumference;
        Scanner s = new Scanner(System.in);
        System.out.println("Enter Radius:");
        radius = s.nextDouble();

        // compute area and circumference
        area = PI * radius * radius;
        circumference = 2.0 * PI * radius;
        System.out.println("Radius: "+radius+"\n"+
                           "Area: "+area+"\n"+
                           "Cirumference"+circumference);

        System.exit(0);
    }
}
