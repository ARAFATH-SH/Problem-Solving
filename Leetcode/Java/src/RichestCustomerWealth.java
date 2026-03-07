public class RichestCustomerWealth {
    static void main() {
        int[][] arr= new int[][] {
                {1,2,3},
                {3,2,1}
        };
        System.out.println(Richest(arr));
    }
    static int Richest(int[][] arr){
        int richest = Integer.MIN_VALUE;

        for (int row = 0; row<arr.length; row++){
            int sum = 0;
            for (int column = 0; column<arr[row].length; column++){
                sum += arr[row][column];
            }
            richest = Math.max(richest, sum);
        }
        return richest;
    }

}
