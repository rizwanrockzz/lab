package rizwan99;

//Java Program to determine whether a given matrix is an identity matrix

public class identityMatrix {
    public static void main(String[] args) {
        int i,j,n;
        boolean flag1=true,flag2=true;
        int a[][] = {{1,0,0},{0,1,0},{0,0,1}};
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
              if(i==j){
                  if(a[i][j]!=1){
                      flag1 = false;
                      break;
                  }
              }
              else{
                  if(a[i][j]!=0){
                      flag2=false;
                      break;
                  }
              }
            }  
        }
        
       if(flag1 && flag2){
           System.out.println("The Given Matrix is an Identity Matrix");
       }
       else{
           System.out.println("The Given Matrix is not an Identity Matrix");
       }
    }
}
