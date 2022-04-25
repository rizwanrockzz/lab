package rizwan99;

import java.util.Scanner;

public class linearsearch {
    public static void main(String args[]){
        int a[] = new int[10];
        int i,n,key,ans = 0;
        boolean flag=false;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array : ");
        n = sc.nextInt();
        System.out.print("Enter Array Elements : ");
        for(i=0;i<n;i++){
            a[i] = sc.nextInt();
        }
        System.out.print("Enter the element to find : ");
        key = sc.nextInt();
        
        for(i=0;i<n;i++){
            if(a[i]==key){
                flag = true;
                ans = i;
                break;
            }
        }
        
        if(flag){
            System.out.print(key+" found at index "+ans);
        }
        else{
            System.out.print(key+" not found ");
        }
        
        System.out.println();
    }
}


// OUTPUT

// Enter size of array : 5
// Enter Array Elements : 4 2 3 1 5
// Enter the element to find : 1
// 1 found at index 3
