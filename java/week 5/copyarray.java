package pkg99;

public class copy {
    public static void main(String args[]){
        int arr[] = {3,4,1,5,6,7};
        int n = arr.length;
        int newarr[] = new int[n];
        
        for(int i=0;i<n;i++){
            newarr[i] = arr[i];
        }
        
        System.out.print("New Array is : ");
        for(int i=0;i<n;i++){
             System.out.print(newarr[i]+" ");
        }
        System.out.println();
        
    }
}
