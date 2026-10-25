
import java.util.Scanner;

public class bee2059 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int p = scanner.nextInt();
        int j1 = scanner.nextInt();
        int j2 = scanner.nextInt();
        int r = scanner.nextInt();
        int a = scanner.nextInt();


        if (r == 1 && a == 1) {
            System.out.println("Jogador 2 ganha!");
        } else if (r == 0 && a == 1) {
            System.out.println("Jogador 1 ganha!");
        } else if (r == 1 && a == 0) {
            System.out.println("Jogador 1 ganha!");
        } else {
            int sum = j1 + j2;

            if (p == 1) {
                if (sum % 2 == 0) {
                    System.out.println("Jogador 1 ganha!");
                } else {
                    System.out.println("Jogador 2 ganha!");
                }
            } else if (p == 0) {
                if (sum % 2 != 0) {
                    System.out.println("Jogador 1 ganha!");
                } else {
                    System.out.println("Jogador 2 ganha!");
                }
            }
        }

        scanner.close();
    }
}