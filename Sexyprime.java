import java.util.Scanner;

public class Sexyprime {
    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        // System.out.println("Enter the value till you want a pair of sexy prime
        // numbers: ");
        // int n = obj.nextInt();
        int arr[] = { 5, 7, 11, 13, 17, 19 };
        for (int i = 0, j = i; i < arr.length && j < arr.length;) {
            if (arr[j] - arr[i] == 6) {
                System.out.println("The pair is: " + "(" + arr[i] + "," + arr[j] + ")");
                i++;
                j = i;
            } else if (arr[j] - arr[i] != 6) {
                j++;
            }

        }
    }
}
