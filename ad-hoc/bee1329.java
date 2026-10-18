import java.util.Scanner;

public class bee1329 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        while (n != 0) {
            int x = 0;
            int y = 0;
            for (int i = 0; i < n; i++) {
                int z = scanner.nextInt();
                if (z == 0) x++;
                else y++;
            }
            System.out.printf("Mary won %d times and John won %d times%n", x, y);
            n = scanner.nextInt();
        }
        scanner.close();
    }
}