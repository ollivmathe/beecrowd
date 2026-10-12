import java.util.Scanner;

public class bee1129 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        char[] letters = {'A', 'B', 'C', 'D', 'E'};

        int n = scanner.nextInt();
        while (n != 0) {
            for (int i = 0; i < n; i++) {
                int black = 0;
                int index = -1;

                for (int j = 0; j < 5; j++) {
                    if (scanner.nextInt() <= 127) {
                        black++;
                        index = j;
                    }
                }

                if (black == 1) {
                    System.out.println(letters[index]);
                } else {
                    System.out.println('*');
                }
            }
            n = scanner.nextInt();
        }
        scanner.close();
    }
}