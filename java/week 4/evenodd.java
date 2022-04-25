package rizwan99;

import java.util.Scanner;

public class evenodd {
    public static void main(String args[]){
        int a[] = new int[5];
        int even[] = new int[5];
        int odd[] = new int[5];
        int ev=0,od=0,i;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter array elements : ");
        for(i=0;i<a.length;i++){
            a[i] = sc.nextInt();
        }
        
        for(i=0;i<a.length;i++){
            if(a[i]%2==0){
                even[ev] = a[i];
                ev = ev+1;
            }
            else{
                odd[od] = a[i];
                od = od+1;
            }
        }
        System.out.println();
        for(i=0;i<even.length;i++){
            System.out.print(even[i]+" ");
        }
        System.out.println();
        for(i=0;i<odd.length;i++){
            System.out.print(odd[i]+" ");
        }
        System.out.println();
    }
}


// OUTPUT 

// Enter array elements : 
// 1 2 3 4 5

// 2 4 0 0 0 
// 1 3 5 0 0 



