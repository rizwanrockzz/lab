package rizwan99;


public class equalMatrices {
    public static void main(String[] args) {
        int a[][] = {{1,2,3},{4,5,6},{7,8,9}};
        int b[][] = {{1,2,3},{4,5,6},{7,8,9}};
        boolean flag = true;
 
        int i,j;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(a[i][j]!=b[i][j]){
                    flag = false;
                    break;
                }
            }
        }
        
        if(flag){
            System.out.println("Both Matrices are equal");
        }
        else{
            System.out.println("Matrices are not equal");
        }
    }
}
