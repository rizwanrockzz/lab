package rizwan99;

import java.util.Scanner;

public class bubblesort {
    public static void main(String args[]){
        int a[] = new int[10];
        int i,j,t,n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array : ");
        n = sc.nextInt();
        System.out.print("Enter Array Elements : ");
        for(i=0;i<n;i++){
            a[i] = sc.nextInt();
        }
        
        for(i=0;i<n-1;i++){
            for(j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]){
                   t = a[j];
                   a[j] = a[j+1];
                   a[j+1] = t;
                }
            }
        }
        
        for(i=0;i<n;i++){
            System.out.print(a[i]+" ");
        }
        System.out.println();
    }
}

// OUTPUT

// Enter size of array : 5
// Enter Array Elements : 5 4 3 2 1
// 1 2 3 4 5 
