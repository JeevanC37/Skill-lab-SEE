import java.util.Arrays;

public class MoveNegatives {
    public static void moveNegatives(int[] arr) {
        int n = arr.length;
        int[] temp = new int[n];
        int j = 0; // index for temp array
        
        // First copy all negative elements
        for (int i = 0; i < n; i++) {
            if (arr[i] < 0) {
                temp[j++] = arr[i];
            }
        }
        
        // Then copy all non-negative elements
        for (int i = 0; i < n; i++) {
            if (arr[i] >= 0) {
                temp[j++] = arr[i];
            }
        }
        
        // Copy back to original array
        System.arraycopy(temp, 0, arr, 0, n);
    }
    
    public static void main(String[] args) {
        int[] arr = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
        System.out.println("Original array: " + Arrays.toString(arr));
        
        moveNegatives(arr);
        
        System.out.println("Modified array: " + Arrays.toString(arr));
    }
}
