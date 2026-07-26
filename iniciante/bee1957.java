import java.util.Scanner;

public class bee1957 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int V = scanner.nextInt();

        char[] hexDigits = "0123456789ABCDEF".toCharArray();
        StringBuilder stringBuilder = new StringBuilder();

        while (V > 0) {
            stringBuilder.append(hexDigits[V % 16]);
            V /= 16;
        }
        System.out.println(stringBuilder.reverse().toString());
        scanner.close();
    }
}