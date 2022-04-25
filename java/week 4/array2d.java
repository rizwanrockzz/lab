package rizwan99;

public class array2d {
    public static void main(String args[]){
        int a[][] = {{10,20},{30,40}};
        int i,j;
        System.out.println("Given Array : ");
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
              System.out.print(a[i][j]+" "); 
            }
            System.out.println();
        }
        System.out.println();
    }
}

// OUTPUT

// Given Array : 
// 10 20 
// 30 40
