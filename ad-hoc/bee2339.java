import java.util.Scanner;

public class bee2339 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int c = scanner.nextInt();
        int p = scanner.nextInt();
        int f = scanner.nextInt();

        if (p / f >= c) {
            System.out.println("S");
        } else {
            System.out.println("N");
        }
    }
}