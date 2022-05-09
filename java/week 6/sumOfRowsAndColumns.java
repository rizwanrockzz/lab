package rizwan99;


public class sumOfRowAndColumn {
    public static void main(String[] args) {    
        int rows, cols, sumRow, sumCol;    
            
        int a[][] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};    
         
        rows = a.length;    
        cols = a[0].length;    
               
        for(int i = 0; i < rows; i++){    
            sumRow = 0;    
            for(int j = 0; j < cols; j++){    
              sumRow = sumRow + a[i][j];    
            }    
            System.out.println("Sum of " + (i+1) +" row: " + sumRow);    
        }    
            
        //Calculates sum of each column of given matrix    
        for(int i = 0; i < cols; i++){    
            sumCol = 0;    
            for(int j = 0; j < rows; j++){    
              sumCol = sumCol + a[j][i];    
            }    
            System.out.println("Sum of " + (i+1) +" column: " + sumCol);    
        }    
    }    
}

//OUTPUT

//Sum of 1 row: 6
//Sum of 2 row: 15
//Sum of 3 row: 24
//Sum of 1 column: 12
//Sum of 2 column: 15
//Sum of 3 column: 18
