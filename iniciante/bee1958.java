import java.util.Scanner;

public class bee1958 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.next();
        double x = Double.parseDouble(input);
        if (input.startsWith("-") && x == 0) {
            System.out.printf("-%.4E%n", 0.0);
        } else {
            System.out.printf("%+.4E%n", x);
        }
        scanner.close();
    }
}
