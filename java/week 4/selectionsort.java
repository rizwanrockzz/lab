package rizwan99;

import java.util.Scanner;

public class selectionsort {
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
            int min_idx = i;
            for(j=i+1;j<n;j++){
                if(a[min_idx]>a[j]){
                   t = a[min_idx];
                   a[min_idx] = a[j];
                   a[j] = t;
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
// Enter Array Elements : 3 1 2 5 4
// 1 2 3 4 5 
