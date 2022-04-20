# 1.	Write a R program to create a matrix taking a given vector of numbers as input. Display the matrix

matrix1 = matrix(c(1:16),nrow=4,byrow =TRUE)
matrix1

# 2.	Write a R program to create a matrix taking a given vector of numbers as input and define the column and row names. 
# Display the matrix

matrix2 = matrix(c(1:16),nrow=4,byrow =TRUE)
colnames(matrix2) = c("col1","col2","col3","col4")
rownames(matrix2) = c("row1","row2","row3","row4")
matrix2


# 3.	Write a R program to access the element at 3rd column and 2nd row, only the 3rd row and only the 4th 
# column of a given matrix

matrix2[2,3]
matrix2[3,] # only 3 rd row
matrix2[,4] # only 4 th column



# 4. Write a R program to create two 2x3 matrix and add, subtract, multiply and divide the matrices.

print("Martix 1")
m1 = matrix(c(1:6),nrow=2,ncol=3)
m1
print("Martix 2")
m2 = array(c(1:6),dim=c(2,3))
m2
#add
m1+m2

# sub
m1-m2

# mul
m1*m2

# div
m1/m2



# 5. Write a R program to extract the sub matrix whose rows have column value > 7 from a given matrix. 


matrix3 = matrix(c(1:16), nrow = 4, byrow = TRUE)
row_names = c("row1", "row2", "row3", "row4")
col_names = c("col1", "col2", "col3", "col4")
matrix3
result = matrix3[matrix3[,3] > 7,]
result



#6. Write a R program to convert a given matrix to a list of column-vectors

matrix4 = matrix(1:12, ncol=3)
"Original matrix:"
matrix4
"list from the said matrix:"
l =  split(matrix4, rep(1:ncol(matrix4), each = nrow(matrix4)))
l

#7. Write a R program to find row and column index of maximum and minimum value in a given matrix

matrix4 = matrix(c(1:16), nrow = 4, byrow = TRUE)
"Original Matrix:"
matrix4
result = which(matrix4 == max(matrix4), arr.ind=TRUE)
print("Row and column of maximum value of the said matrix:")
print(result)
result = which(matrix4 == min(matrix4), arr.ind=TRUE)
"Row and column of minimum value of the said matrix:"
result


















