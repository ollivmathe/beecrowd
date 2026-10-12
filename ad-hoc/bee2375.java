import java.util.Scanner;

public class bee2375 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        int a = scanner.nextInt();
        int l = scanner.nextInt();
        int p = scanner.nextInt();

        if (n > a || n > l || n > p) {
            System.out.println("N");
        } else {
            System.out.println("S");
        }
    }
}