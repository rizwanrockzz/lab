package rizwan99;

//Java Program to Add Two Matrices

public class addMatrices {
    public static void main(String[] args) {
        int i,j;
        int a[][] = {{1,2,3},{4,5,6},{7,8,9}};
        int b[][] = {{1,2,1},{3,1,5},{6,2,4}};
        
        int c[][] = new int[3][3];
        
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
              c[i][j] = a[i][j]+b[i][j];
            }  
        }
        
        System.out.println("Addition of Matrices : ");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
              System.out.print(c[i][j]+" ");
            }
            System.out.println();
        }
        System.out.println();
    }
}
