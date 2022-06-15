# MATH IN R

# cumulative sum and product

x <- c(1,2,3)
x
cumsum(x)
cumprod(x)

# min and pmin functions

M <- matrix(c(1:6), nrow = 3, byrow = TRUE)
print(M)

min(M[,1],M[,2])
pmin(M[,1],M[,2])

# sorting

y <- c(45,2,13,8,12,3,1)
y
sort(y)
order(y)

#cross product linear algebra

m1 = matrix(c(1,4,7,2),nrow=2,byrow=TRUE)
m2 = matrix(c(-4,11,6,9),nrow=2,byrow=TRUE)
m1
m2
crossprod(m1,m2)


#set operations

x <- c(1,2,5)
y <- c(5,1,8,9)
union(x,y)

intersect(x,y)

setdiff(x,y)

setdiff(y,x)

setequal(x,y)

setequal(x,c(1,2,5))

2 %in% x

2 %in% y

choose(5,2)











