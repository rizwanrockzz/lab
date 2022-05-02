package rizwan99;

//Java Program to print the elements of an array present on even position 
//Java Program to print the elements of an array present on odd position


public class evenoddplace {
    public static void main(String[] args) {
        int a[]={1,4,2,5,7,8,11,14};
        int i;
        System.out.println("Even place elements");
        for(i=0;i<a.length;i++){
            if(i%2==0){
                System.out.print(a[i]+" ");
            }
        }
        
        System.out.println("Odd place elements");
        for(i=0;i<a.length;i++){
            if(i%2!=0){
                System.out.print(a[i]+" ");
            }
        }
        System.out.println();
    }
}
