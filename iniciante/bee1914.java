import java.util.Scanner;

public class bee1914 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        final int QT = scanner.nextInt();
        for (int i = 0; i < QT; i++) {
            boolean firstPlayerIsEven;

            String firstPlayer = scanner.next();
            String firstPlayerChoice = scanner.next();

            if (firstPlayerChoice.equals("PAR")) {
                firstPlayerIsEven = true;
            } else {
                firstPlayerIsEven = false;
            }

            String secondPlayer = scanner.next();
            String secondPlayerChoice = scanner.next();

            int firstPlayerNumber = scanner.nextInt();
            int secondPlayerNumber = scanner.nextInt();
            int sumOfNumbers = firstPlayerNumber + secondPlayerNumber;

            if (firstPlayerIsEven && sumOfNumbers % 2 == 0) {
                System.out.println(firstPlayer);
            } else if (firstPlayerIsEven == false && sumOfNumbers % 2 != 0) {
                System.out.println(firstPlayer);
            } else {
                System.out.println(secondPlayer);
            }
        }
        scanner.close();
    }
}