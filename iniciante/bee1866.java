import java.util.Scanner;

public class bee1866 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int c = scanner.nextInt();
        for (int i = 0; i < c; i++) {
            int n = scanner.nextInt();
            if (n % 2 == 0) {
                System.out.println(0);
            } else {
                System.out.println(1);
            }
        }        
        scanner.close();
    }
}