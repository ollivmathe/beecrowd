import java.util.Scanner;

public class bee1933 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int A = scanner.nextInt();
        int B = scanner.nextInt();
        int C;

        if (A == B) {
            C = B;
        } else if (A > B) {
            C = A;
        } else {
            C = B;
        }
        System.out.println(C);
        scanner.close();
    }
}