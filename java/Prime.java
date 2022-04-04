import java.util.Scanner;

public class Prime {
    public static void main(String args[]){
        int num,t,i;
        
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number : ");
        num = sc.nextInt();
        
        t = num;
        
        while(t!=0){
            int flag = 0;
            int n = t%10;
            int m=n/2;      
            if(n==0||n==1){  
                System.out.println(n+" is not prime number");      
            }
            else{  
                for(i=2;i<=m;i++){      
                    if(n%i==0){      
                        System.out.println(n+" is not prime number");      
                        flag=1;      
                        break;      
                     }      
                }  
//                System.out.println("After break");
                if(flag==0)  
                { 
                    System.out.println(n+" is prime number"); 
                }  
            }//end of else  
            t = t/10;
            
            
        }
    }
}







