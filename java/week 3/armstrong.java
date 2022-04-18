package javalabrizwan99;

import java.util.Scanner;


public class armstrong {
    public static void main(String args[]){
        int n,rem,sum=0,t;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number : ");
        n = sc.nextInt();
        t = n;
        
        while(t!=0){
            rem = t%10;
            sum = sum+(rem*rem*rem);
            t = t/10;
        }
        
        if(sum==n){
            System.out.println(n+" is an armstrong number");
        }
        else{
            System.out.println(n+" is not an armstrong number");
        }
    }
}


        
    
    

