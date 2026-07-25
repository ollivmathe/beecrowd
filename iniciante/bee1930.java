import java.util.Scanner;

public class bee1930 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = 0;
        for (int i = 1; i <= 4; i++) {
            if (i > 3) {
                T += scanner.nextInt();
            } else {
                T += (scanner.nextInt() - 1);
            }
        }
        scanner.close();
        System.out.println(T);
    }
}