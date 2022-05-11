## APPLY

theMatrix<- matrix(1:9,nrow=3)
theMatrix

apply(theMatrix,1,sum) # row
apply(theMatrix,2,sum) # column

rowSums(theMatrix)
colSums(theMatrix)

theMatrix[2,2] <- NA
theMatrix

apply(theMatrix,1,sum,na.rm = TRUE) # row
apply(theMatrix,2,sum,na.rm = TRUE) # column

## LAPPLY ( for lists )

theList<- list(A= matrix(1:10, 2), B=1:6, C=matrix(1:4, 2), D=2)
lapply(theList, sum)

sapply(theList, sum) # Sapply to return result in vector

# LAPPLY AND SAPPLY for vectors

theNames<-c("Jared", "Deb", "Paul")
lapply(theNames, nchar)
sapply(theNames, nchar)

## MAPPLY

firstList<-list(A=matrix(1:16,4), B=matrix(1:16,2),C=1:5)
secondList<-list(A=matrix(1:16,4),B=matrix(1:16,2),C=15:1)

mapply(identical, firstList,secondList)

# can also apply functions

simpleFunc<-function(x,y)
{
  print("X is : ")
  print(x)

  print("Y is : ")
  print(y)
}

mapply(simpleFunc,firstList,secondList)




## AGGREGATE

require(ggplot2)
data(diamonds)
head(diamonds)

diamonds












