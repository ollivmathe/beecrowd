import java.util.Scanner;

public class bee2060 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] nums = new int[scanner.nextInt()];
        int two = 0; int three = 0; int four = 0; int five = 0;
        for (int i = 0; i < nums.length; i++) {
            nums[i] = scanner.nextInt();

            if (nums[i] % 2 == 0) two++;
            if (nums[i] % 3 == 0) three++;
            if (nums[i] % 4 == 0) four++;
            if (nums[i] % 5 == 0) five++;
        }
        scanner.close();
        System.out.printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n", two, three, four, five);
    }
}