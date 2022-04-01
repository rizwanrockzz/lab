import java.util.Scanner;
import java.io.*;

class numberInput {
  public static void main(String[] args) {
    Scanner myObj = new Scanner(System.in);

    System.out.println("Enter a : ");

    int a = myObj.nextInt();
    
    System.out.println("Enter b : ");
    
    int b = myObj.nextInt();

    System.out.println("Sum is : "+(a+b));
	System.out.println("Sub is : "+(a-b));
	System.out.println("Mul is : "+(a*b));
	System.out.println("Div is : "+(a/b));
	System.out.println("Mod is : "+(a%b));
  }
}