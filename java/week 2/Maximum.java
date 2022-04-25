import java.util.Scanner;

public class Maximum {
    public static void main(String[] args){
        int a,b,c;

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a : ");
        a = sc.nextInt();
        
        System.out.println("Enter b : ");
        b = sc.nextInt();

        System.out.println("Enter c : ");
        c = sc.nextInt();
        
        int max;
        
        System.out.print("The maximum number is : ");
        if(a>c && a>b){
            System.out.println(a);
        }
        else if(b>c && b>a){
            System.out.println(b);
        }
        else{
            System.out.println(c);
        }
        
        
    }
}
