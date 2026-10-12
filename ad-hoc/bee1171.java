import java.util.Map;
import java.util.Scanner;
import java.util.HashMap;

public class bee1171 {
    public static void main(String[] args) {
        HashMap<Integer, Integer> nums = new HashMap<>();
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            int x = scanner.nextInt();
            nums.merge(x, 1, Integer::sum);
        }

        for (Map.Entry<Integer, Integer> entry : nums.entrySet()) {
            System.out.printf("%d aparece %d vez(es)\n", entry.getKey(), entry.getValue());
        }
    }
}