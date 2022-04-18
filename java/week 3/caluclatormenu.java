package javalabrizwan99;

import java.util.Scanner;

public class caluclatormenu {
    public static void main(String args[]){
        int a,b;
        char key;
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter a : ");
        a = sc.nextInt();
        System.out.print("Enter b : ");
        b = sc.nextInt();
        System.out.print("Enter your operation (Eg : +,-,*,/) : ");
        key = sc.next().charAt(0);
        
        switch(key){
            case '+':
                System.out.println(a+b);
                break;
            case '-':
                System.out.println(a-b);
                break;
            case '*':
                System.out.println(a*b);
                break;
            case '/':
                System.out.println(a/b);  
                break;
            default:
                System.out.println("Enter a valid symbol");  
        }
        
    }
}
