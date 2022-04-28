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
  l = nrow(age)
  s = sum(age)
  print(l)
  print(s)
  print(age)
  print(class(age))
  print(paste("Mean is : ",s/l))
  print(paste("Average is : ",s/l))
  if(l%%2==0){
    
    med = as.numeric(data[l/2, 1])+as.numeric([(l/2)+1, 1])
    print(paste("Median is : ",med/2))
    
  }
  else{
    print(paste("Median is : ",data[l/2, 1]))
  }
}


getStat(data)

