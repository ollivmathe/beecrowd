import java.util.Scanner;

public class bee2146 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNext()) {
            int pass = scanner.nextInt();
            System.out.println(pass - 1);
        }
        scanner.close();
    }
}