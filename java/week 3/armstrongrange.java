package javalabrizwan99;

public class armstrongrange {
    public static void main(String args[]){
        int rem,sum=0,t;

        for(int i=100;i<=1000;i++){
            t = i;
        
            while(t!=0){
                rem = t%10;
                sum = sum+(rem*rem*rem);
                t = t/10;
            }

            if(sum==i){
                System.out.print(i+" ");
            }
            
            sum = 0;
            rem = 0;
        
        }
        
    }
}
