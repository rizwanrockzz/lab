package javalabrizwan99;

import java.util.Scanner;

public class strongnumber {
    public static void main(String args[]){
        int n,rem,sum=0,t,fact = 1;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number : ");
        n = sc.nextInt();
        t = n;
        
        while(t!=0){
            rem = t%10;
            for(int i=1;i<=rem;i++){
                fact = fact*i;
                
            }
            sum = sum+fact;
            fact = 1;
            t = t/10;
        }
        
        if(sum==n){
            System.out.println(n+" is a strong number");
        }
        else{
            System.out.println(n+" is not a strong number");
        }
    }
    
}
