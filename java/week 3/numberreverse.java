package javalabrizwan99;

import java.util.Scanner;

public class numberreverse {
    public static void main(String args[]){
        int n,rev=0,rem,t;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number : ");
        n = sc.nextInt();
        t = n;
        while(t!=0){
            rem = t%10;
            rev = rev*10+rem;
            t = t/10;
        }
        System.out.println("The reverse of "+n+" is : "+rev);
    }
    
}
