import java.util.Scanner;

public class bee2388 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int x = 0;
        for (int i = 0; i < n; i++) {
            int t = scanner.nextInt();
            int v = scanner.nextInt();
            x += t * v;
        }
        System.out.println(x);
    }
}