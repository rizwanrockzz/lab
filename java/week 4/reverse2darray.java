package rizwan99;

import java.util.Scanner;

public class reverse2darray {
    public static void main(String args[]){
        int n,i,j;
        System.out.print("Given size of array : ");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int a[][] = new int[n][n];
        System.out.println("Enter Array : ");
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
              a[i][j] = sc.nextInt();
            }
        }
        System.out.println("Reverse order of Array : ");
        for(i=n-1;i>=0;i--){
            for(j=n-1;j>=0;j--){
               System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }
        System.out.println();
    }
}


// OUTPUT

// Given size of array : 2
// Enter Array : 
// 1 2
// 3 4
// Reverse order of Array : 
// 4 3 
// 2 1 



