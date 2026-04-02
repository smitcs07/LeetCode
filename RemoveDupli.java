public class RemoveDupli {
    public static void main(String[] args) {
        int []arr = {1,1,1,2,2,2,2,2,3,3,3,3};
        int k = 1,i=0;
        for(int j=i+1;j<arr.length && i<arr.length;j++){
            if(arr[k]!=arr[j]){
            arr[i+1] = arr[j];
                k = j;
                i++;
            }
        }
        System.out.println("The unique numbers are: "+(i+1));
    }
}
