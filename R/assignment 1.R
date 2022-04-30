#  Create a function to calculate the average, median and mean for a numeric vector age in employee database

install.packages("RMySQL")
library(RMySQL)


mydb = dbConnect(MySQL(), user='root', password='', dbname='employee', host='localhost')
mydb
dbListTables(mydb)
dbListFields(mydb, 'info')
rs = dbSendQuery(mydb, "select age from info")
rs
print(rs)
data = fetch(rs, n=-1)
data

getStat <- function(age){
  age = sort(age)
  l = length(age)
  s = sum(age)
  print(l)
  print(s)
  print(age)
  print(class(age))
  print(paste("Mean is : ",s/l))
  print(paste("Average is : ",s/l))
  if(l%%2==0){
    
    med = age[l/2]+age[(l/2)+1]
    print(paste("Median is : ",med/2))
    
  }
  else{
    print(paste("Median is : ",data[l/2]))
  }
}


getStat(data$age)
summary(data)












# 2 Create a data frame that stores the name, age, designation of the employee. Find how  many employees are 
# working in each designation?    

Name=c('ravi','raju','ramu','seetha','geetha','rahul','kumar')
Age=c(23,22,25,26,32,28,25)
Designation=c("SDE-1","Manager","SDE-2","CEO","Team Leader","SDE-1","SDE-1")
UniqueDes = Designation[!duplicated(Designation)]
UniqueDes
Employees = data.frame(Name,Age,Designation)             
Employees
des = c()
no = c()
count = 0
for(i in 1:length(UniqueDes)) { 
  for(j in 1:length(Designation)){
    if(UniqueDes[i]==Designation[j]){
      count = count+1
    }
  }
  des = append(des,UniqueDes[i])
  no = append(no,count)
  count = 0
}
des
no
countEmpolyees = data.frame("Designation"=UniqueDes,"Count"=no)
countEmpolyees










# 3.Create two vectors that stores the details of name and gender of the employees. Find how many 'male' and 'female' 
# employees are present?

Name=c('ravi','raju','ramu','seetha','geetha')
Gender=c("M","M","M","F","F")
UniqueGen = Gender[!duplicated(Gender)]
UniqueGen
theDF = data.frame(Name,Gender)
theDF

sum(Gender == "M")
sum(Gender == "F")

# OR 

no = c()
for(i in 1:length(UniqueGen)) { 
  for(j in 1:length(Gender)){
    if(UniqueGen[i]==Gender[j]){
      count = count+1
    }
  }
  no = append(no,count)
  count = 0
}

no
theDF2 = data.frame(UniqueGen,no)
theDF2








# Write R code to define the function by using if-else
#   F(x)=x 	if x<1/2
# ``=(1-x)	if ½<x<1
# ``=0 	otherwise

sample_func = function(x){
  if(x<0.5){
    print(x)
  }
  else if(x>0.5 && x<1){
    print(1-x)
  }
  else{
    print(0)
  }
}

sample_func(0.3)
sample_func(0.9)
sample_func(100)
























