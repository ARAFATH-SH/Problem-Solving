import java.util.Scanner;
import java.lang.Math;
public class FindNumbersWithEvenNumberOfDigits {
    static void main() {
        int nums[] = new int[]{12, 345, 2, 6, 7896};
        System.out.println(findNumofDigits(nums));
    }

    static int findNumofDigits(int[]nums){
        int count = 0;
        for (int x: nums){
            double value = Math.log10(x)+1;
            if (((int)value & 1) == 0){
                count++;
            }
        }
        return count;
    }

}
