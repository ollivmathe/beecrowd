import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class bee1929 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<Integer> nums = new ArrayList<>();
        for (int i = 0; i < 4; i++) {
            nums.add(scanner.nextInt());
        }
        nums.sort(null);
        if (nums.get(0) + nums.get(1) > nums.get(2)) {
            System.out.println("S");
        } else if (nums.get(1) + nums.get(2) > nums.get(3)) {
            System.out.println("S");
        } else {
            System.out.println("N");
        }
        scanner.close();
    }
}