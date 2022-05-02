package rizwan99;

//Java Program to find the transpose of a given matrix

import java.util.Scanner;


public class transpose {
    public static void main(String[] args) {
        int i,j,n;
        int a[][] = {{1,2,3},{4,5,6},{7,8,9}};
        Scanner sc = new Scanner(System.in);
        int b[][] = new int[3][3];
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
              b[i][j] = a[j][i];
            }  
        }
        
        System.out.println("Given Matrice : ");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
              System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }
        System.out.println();
        System.out.println("Transpose of Matrices : ");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
              System.out.print(b[i][j]+" ");
            }
            System.out.println();
        }
        
    }
}
