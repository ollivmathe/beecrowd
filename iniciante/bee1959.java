import java.util.Scanner;

public class bee1959 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long n = scanner.nextInt();
        long l = scanner.nextInt();
        long p = n * l;
        System.out.println(p);
        scanner.close();
    }
}