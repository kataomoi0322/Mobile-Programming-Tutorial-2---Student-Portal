import java.util.Scanner;

public class exercise4_leexuanhui{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String name = "Lee Xuan Hui";
        Double total = 0.00;
        System.out.println(name);
        for (int i = 1; i <= 5; i++) {
            System.out.print("Input "+ i +": ");
            double number = scanner.nextDouble();
            total += number;
            System.out.println("Jumlah semasa: "+total);
        }
        scanner.close();
        System.exit(0);

    }
}
