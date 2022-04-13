#1. Write R code to create a vector of a specified type and length. Create vector of numeric, complex, 
#logical and character types of length 6. 

vec_int = c(2,4,6,8,1,9)

vec_char = c('r','i','z','w','a','n')

vec_logic = c(TRUE,FALSE,TRUE,FALSE,TRUE,FALSE)

vec_int

vec_char

vec_logic

length(vec_int)
length(vec_char)
length(vec_logic)

class(vec_int)
class(vec_char)
class(vec_logic)

abc = "TRUE"

class(abc)

is.logical(abc)



# 2. Write R code to add two vectors of integer’s type and length 3

vec1 = c(2,4,5)
vec2 = c(1,6,2)

vec1
vec2

vec1+vec2



# 3. Write R code to append value to a given empty vector

vec_empty = c()
values = c(12,4,3,56,11)

for (i in 1:length(values))
  vec_empty[i] <- values[i]

vec_empty



# 4. Write R code to multiply two vectors of integer’s type and length 3.

vec3 = c(11,4,2)
vec4 = c(9,3,7)

vec3
vec4

vec3*vec4



# 5. Write R code to divide two vectors of integer’s type and length 3

vec5 = c(23,41,66)
vec6 = c(11,3,35)

vec5
vec6

vec5/vec6


# 6. Write R code to find Sum, Mean and Product of a Vector

vec_mean = c(12,3,56,1,2,7,11)
mean_val = mean(vec_mean)
mean_val

#     OR

vec_sum = sum(vec_mean)
vec_sum
len = length(vec_mean)
len

ans = vec_sum/len
ans

# 7. Write R code to find Sum, Mean and Product of a Vector, ignore element like NA or NaN

vec_nan = c(12,NA,56,1,NULL,7,11,NA,15)

vec_nan
mean(vec_nan,na.rm=TRUE)

sum2 = sum(vec_nan,na.rm=TRUE)
len2 = length(vec_nan)-2
ans2 = sum2/len2

ans2

# 8. Write R code to find the minimum and the maximum of a Vector

minmax = c(10, 20, 30, 25, 9, 26)

min(minmax)
max(minmax)


# 9. Write R code to sort a Vector in ascending and descending order. 

vec_sort = c(34,2,11,6,12,45,75,3)

sort(vec_sort)
sort(vec_sort,decreasing = TRUE)


# 10. Write R code to test whether a given vector contains a specified element.

vec_find = c(2,5,3,7,12,4,19,32)

is.element(7,vec_find)
is.element(99,vec_find)































































