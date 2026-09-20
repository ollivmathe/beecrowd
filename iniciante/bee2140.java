import java.util.Scanner;

public class bee2140 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] notas = {2, 5, 10, 20, 50, 100};
        while (scanner.hasNext()) {
            int n = scanner.nextInt();
            int m = scanner.nextInt();

            if (n == 0 && m == 0) break;

            int troco = m - n;
            boolean possivel = false;

            for (int i = 0; i < notas.length; i++) {
                for (int j = 0; j < notas.length; j++) {
                    if (notas[i] + notas[j] == troco) {
                        possivel = true;
                        break;
                    }
                }
                if (possivel) break;
            }
            if (possivel) {
                System.out.println("possible");
            } else {
                System.out.println("impossible");
            }
        }
        scanner.close();
    }
}