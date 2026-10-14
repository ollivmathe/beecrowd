import java.util.Scanner;

public class bee1087 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x1 = scanner.nextInt();
        int y1 = scanner.nextInt();
        int x2 = scanner.nextInt();
        int y2 = scanner.nextInt();

        while(x1 != 0 && x2 != 0 && y1 != 0 && y2 != 0) {
            if (x1 == x2 && y1 == y2) {
                System.out.println("0");
            } else if ((x1 == x2 || y1 == y2) || (Math.abs(x1 - x2) == Math.abs(y1 - y2))) {
                System.out.println("1");
            } else {
                System.out.println("2");
            }

            x1 = scanner.nextInt();
            y1 = scanner.nextInt();

            x2 = scanner.nextInt();
            y2 = scanner.nextInt();
        }
        scanner.close();
    }
}