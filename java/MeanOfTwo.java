import java.util.Scanner;


public class MeanOfTwo {
    public static void main(String[] args){
        int a,b,c;
        double mean;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a : ");
        a = sc.nextInt();
        
        System.out.println("Enter b : ");
        b = sc.nextInt();

        System.out.println("Enter c : ");
        c = sc.nextInt();
        
        mean = (a+b+c)/3;
        
        System.out.println("The mean is : "+mean);
    }
}
