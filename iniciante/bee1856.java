import java.util.Scanner;

public class bee1856 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int c = scanner.nextInt();
        for (int i = 0; i < c; i++) {
            String name = scanner.next();
            int power = scanner.nextInt();
            if (name.equals("Thor")) {
                System.out.println("Y");
            } else {
                System.out.println("N");
            }
        }        
        scanner.close();
    }
}