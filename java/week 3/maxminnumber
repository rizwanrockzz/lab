package javalabrizwan99;

import java.util.Scanner;


public class maxminnumber {
    public static void main(String args[]){
       int n,min=10,max=-1;
       Scanner sc = new Scanner(System.in);
       System.out.println("Enter a number : ");
       n = sc.nextInt();
       
       while(n!=0){
           int rem = n%10;
           if(rem>max){
               max = rem;
           }
           if(rem<min){
               min = rem;
           }
           n = n/10;
       }
       
       System.out.println("Maximum number is : "+max);
       System.out.println("Minimum number is : "+min);
       
    }
}
