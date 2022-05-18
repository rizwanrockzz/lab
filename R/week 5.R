> sport<- c("Hockey", "Baseball", "Football")
> league<- c("NHL", "MLB", "NFL")
> trophy<- c("Stanley Cup", "Commissioner’s Trophy", "Vince Lombardi Trophy")
> cbind1 <- cbind(sport, league, trophy)
> cbind1
     sport      league trophy                 
[1,] "Hockey"   "NHL"  "Stanley Cup"          
[2,] "Baseball" "MLB"  "Commissioner’s Trophy"
[3,] "Football" "NFL"  "Vince Lombardi Trophy"
> cbind1 <- cbind(Sport=sport, League=league, Trophy=trophy)
> cbind1
     Sport      League Trophy                 
[1,] "Hockey"   "NHL"  "Stanley Cup"          
[2,] "Baseball" "MLB"  "Commissioner’s Trophy"
[3,] "Football" "NFL"  "Vince Lombardi Trophy"
> 
> c1 = c("Basketball", "Golf")
> c2 = c("NBA", "PGA")
> c3 = c("Larry O’Brien Championship Trophy", "Wanamaker Trophy")
> trophies<- data.frame(sport=c1, league=c2, trophy=c3, stringsAsFactors=FALSE)
> rbind1<-rbind(cbind1,trophies)
Error in match.names(clabs, names(xi)) : 
  names do not match previous names
> rbind1<-rbind(cbind1,trophies)
Error in match.names(clabs, names(xi)) : 
  names do not match previous names
> ## BINDS
> 
> # CBIND ( for vectors )
> 
> sport<- c("Hockey", "Baseball")
> league<- c("NHL", "MLB")
> trophy<- c("Stanley Cup", "Commissioner’s Trophy")
> 
> cbind1 <- cbind(Sport=sport, League=league, Trophy=trophy)
> 
> cbind1
     Sport      League Trophy                 
[1,] "Hockey"   "NHL"  "Stanley Cup"          
[2,] "Baseball" "MLB"  "Commissioner’s Trophy"
> 
> # RBIND (for data.frames)
> 
> c1 = c("Basketball", "Golf")
> c2 = c("NBA", "PGA")
> c3 = c("Larry O’Brien Championship Trophy", "Wanamaker Trophy")
> 
> trophies<- data.frame(sport=c1, league=c2, trophy=c3, stringsAsFactors=FALSE)
> 
> rbind1<-rbind(cbind1,trophies)
Error in match.names(clabs, names(xi)) : 
  names do not match previous names
> rbind1
Error: object 'rbind1' not found
> trophies<- data.frame(sport=c1, league=c2, trophy=c3)
> rbind1<-rbind(cbind1,trophies)
Error in match.names(clabs, names(xi)) : 
  names do not match previous names
> rbind1<-rbind(league,trophies)
Warning message:
In rbind(deparse.level, ...) :
  number of columns of result, 3, is not a multiple of vector length 2 of arg 1
> league<- c("NHL", "MLB")
> trophies<- data.frame(sport=c1, league=c2, trophy=c3, stringsAsFactors=FALSE)
> rbind1<-rbind(league,trophies)
Warning message:
In rbind(deparse.level, ...) :
  number of columns of result, 3, is not a multiple of vector length 2 of arg 1
> sport<- c("Hockey", "Baseball")
> league<- c("NHL", "MLB")
> trophy<- c("Stanley Cup", "Commissioner’s Trophy")
> cbind1 <- cbind(Sport=sport, League=league, Trophy=trophy)
> cbind1
     Sport      League Trophy                 
[1,] "Hockey"   "NHL"  "Stanley Cup"          
[2,] "Baseball" "MLB"  "Commissioner’s Trophy"
> trophy<- c("Stanley Cup", "Commissioner’s Trophy")
> cbind1 <- cbind(Sport=sport, League=league, Trophy=trophy)
> cbind1
     Sport      League Trophy                 
[1,] "Hockey"   "NHL"  "Stanley Cup"          
[2,] "Baseball" "MLB"  "Commissioner’s Trophy"
> c1 = c("Basketball", "Golf")
> c2 = c("NBA", "PGA")
> c3 = c("Larry O’Brien Championship Trophy", "Wanamaker Trophy")
> trophies<- data.frame(sport=c1, league=c2, trophy=c3, stringsAsFactors=FALSE)
> rbind1<-rbind(league,trophies)
Warning message:
In rbind(deparse.level, ...) :
  number of columns of result, 3, is not a multiple of vector length 2 of arg 1
> # CBIND ( for vectors )
> require(dplyr)
Loading required package: dplyr
Warning message:
In library(package, lib.loc = lib.loc, character.only = TRUE, logical.return = TRUE,  :
  there is no package called ‘dplyr’
> # CBIND ( for vectors )
> require("dplyr")
Loading required package: dplyr
Warning message:
In library(package, lib.loc = lib.loc, character.only = TRUE, logical.return = TRUE,  :
  there is no package called ‘dplyr’
> sport<- c("Hockey", "Baseball")
> ## BINDS
> 
> # CBIND ( for vectors )
> 
> sport<- c("Hockey", "Baseball", "Football")
> league<- c("NHL", "MLB", "NFL")
> trophy<- c("Stanley Cup", "Commissioner’s Trophy", "Vince Lombardi Trophy")
> 
> cbind1 <- cbind(Sport=sport, League=league, Trophy=trophy)
> 
> cbind1
     Sport      League Trophy                 
[1,] "Hockey"   "NHL"  "Stanley Cup"          
[2,] "Baseball" "MLB"  "Commissioner’s Trophy"
[3,] "Football" "NFL"  "Vince Lombardi Trophy"
> 
> # RBIND (for data.frames)
> 
> c1 = c("Basketball", "Golf","Tennis")
> c2 = c("NBA", "PGA","IND")
> c3 = c("Larry O’Brien Trophy", "Wanamaker Trophy","Arjuna Trophy")
> 
> trophies<- data.frame(sport=c1, league=c2, trophy=c3, stringsAsFactors=FALSE)
> 
> rbind1<-rbind(cbind1,trophies)
Error in match.names(clabs, names(xi)) : 
  names do not match previous names
> rbind1
       sport league                            trophy
1        NHL    MLB                               NHL
2 Basketball    NBA Larry O’Brien Championship Trophy
3       Golf    PGA                  Wanamaker Trophy
> sport<- c("Hockey", "Baseball", "Football")
> league<- c("NHL", "MLB", "NFL")
> trophy<- c("Stanley Cup", "Commissioner’s Trophy", "Vince Lombardi Trophy")
> cbind1 <- cbind(Sport=sport, League=league, Trophy=trophy)
> cbind1
     Sport      League Trophy                 
[1,] "Hockey"   "NHL"  "Stanley Cup"          
[2,] "Baseball" "MLB"  "Commissioner’s Trophy"
[3,] "Football" "NFL"  "Vince Lombardi Trophy"
> c1 = c("Basketball", "Golf","Tennis")
> c2 = c("NBA", "PGA","IND")
> c3 = c("Larry O’Brien Trophy", "Wanamaker Trophy","Arjuna Trophy")
> trophies<- data.frame(sport=c1, league=c2, trophy=c3, stringsAsFactors=FALSE)
> colnames(trophies) <- colnames(cbind1)
> rbind1<-rbind(cbind1,trophies)
> rbind1
       Sport League                Trophy
1     Hockey    NHL           Stanley Cup
2   Baseball    MLB Commissioner’s Trophy
3   Football    NFL Vince Lombardi Trophy
4 Basketball    NBA  Larry O’Brien Trophy
5       Golf    PGA      Wanamaker Trophy
6     Tennis    IND         Arjuna Trophy
> ## BINDS
> 
> # CBIND ( for vectors )
> 
> sport<- c("Hockey", "Baseball", "Football")
> league<- c("NHL", "MLB", "NFL")
> trophy<- c("Stanley Cup", "Commissioner’s Trophy", "Vince Lombardi Trophy")
> 
> cbind1 <- cbind(Sport=sport, League=league, Trophy=trophy)
> 
> cbind1
     Sport      League Trophy                 
[1,] "Hockey"   "NHL"  "Stanley Cup"          
[2,] "Baseball" "MLB"  "Commissioner’s Trophy"
[3,] "Football" "NFL"  "Vince Lombardi Trophy"
> 
> # RBIND (for data.frames)
> 
> c1 = c("Basketball", "Golf","Tennis")
> c2 = c("NBA", "PGA","IND")
> c3 = c("Larry O’Brien Trophy", "Wanamaker Trophy","Arjuna Trophy")
> 
> trophies<- data.frame(sport=c1, league=c2, trophy=c3, stringsAsFactors=FALSE)
> 
> # colnames(trophies) <- colnames(cbind1)
> 
> rbind1<-rbind(cbind1,trophies)
Error in match.names(clabs, names(xi)) : 
  names do not match previous names
> rbind1
       Sport League                Trophy
1     Hockey    NHL           Stanley Cup
2   Baseball    MLB Commissioner’s Trophy
3   Football    NFL Vince Lombardi Trophy
4 Basketball    NBA  Larry O’Brien Trophy
5       Golf    PGA      Wanamaker Trophy
6     Tennis    IND         Arjuna Trophy
> ## BINDS
> 
> # CBIND ( for vectors )
> 
> sport<- c("Hockey", "Baseball", "Football")
> league<- c("NHL", "MLB", "NFL")
> trophy<- c("Stanley Cup", "Commissioner’s Trophy", "Vince Lombardi Trophy")
> 
> cbind1 <- cbind(Sport=sport, League=league, Trophy=trophy)
> 
> cbind1
     Sport      League Trophy                 
[1,] "Hockey"   "NHL"  "Stanley Cup"          
[2,] "Baseball" "MLB"  "Commissioner’s Trophy"
[3,] "Football" "NFL"  "Vince Lombardi Trophy"
> 
> # RBIND (for data.frames)
> 
> c1 = c("Basketball", "Golf","Tennis")
> c2 = c("NBA", "PGA","IND")
> c3 = c("Larry O’Brien Trophy", "Wanamaker Trophy","Arjuna Trophy")
> 
> trophies<- data.frame(Sport=c1, League=c2, Trophy=c3, stringsAsFactors=FALSE)
> 
> # colnames(trophies) <- colnames(cbind1)
> 
> rbind1<-rbind(cbind1,trophies)
> rbind1
       Sport League                Trophy
1     Hockey    NHL           Stanley Cup
2   Baseball    MLB Commissioner’s Trophy
3   Football    NFL Vince Lombardi Trophy
4 Basketball    NBA  Larry O’Brien Trophy
5       Golf    PGA      Wanamaker Trophy
6     Tennis    IND         Arjuna Trophy
> ## BINDS
> 
> # CBIND ( for vectors )
> 
> sport<- c("Hockey", "Baseball", "Football")
> league<- c("NHL", "MLB", "NFL")
> trophy<- c("Stanley Cup", "Commissioner’s Trophy", "Vince Lombardi Trophy")
> 
> cbind1 <- cbind(Sport=sport, League=league, Trophy=trophy)
> 
> cbind1
     Sport      League Trophy                 
[1,] "Hockey"   "NHL"  "Stanley Cup"          
[2,] "Baseball" "MLB"  "Commissioner’s Trophy"
[3,] "Football" "NFL"  "Vince Lombardi Trophy"
> 
> # RBIND (for data.frames)
> 
> c1 = c("Basketball", "Golf","Tennis")
> c2 = c("NBA", "PGA","IND")
> c3 = c("Larry O’Brien Trophy", "Wanamaker Trophy","Arjuna Trophy")
> 
> trophies<- data.frame(Sport=c1, League=c2, Trophy=c3)
> 
> # colnames(trophies) <- colnames(cbind1)
> 
> rbind1<-rbind(cbind1,trophies)
> rbind1
       Sport League                Trophy
1     Hockey    NHL           Stanley Cup
2   Baseball    MLB Commissioner’s Trophy
3   Football    NFL Vince Lombardi Trophy
4 Basketball    NBA  Larry O’Brien Trophy
5       Golf    PGA      Wanamaker Trophy
6     Tennis    IND         Arjuna Trophy
> StudentId = c(101:106)
> Product = c("Hindi", "English", "Maths", "Science", "Political Science", "Physics")
> df1 = data.frame(StudentId, Product)
> df1 
  StudentId           Product
1       101             Hindi
2       102           English
3       103             Maths
4       104           Science
5       105 Political Science
6       106           Physics
> StudentId1 = c(101:106)
> Product = c("Hindi", "English", "Maths", "Science", "Political Science", "Physics")
> 
> df1 = data.frame(StudentId1, Product)
> df1 
  StudentId1           Product
1        101             Hindi
2        102           English
3        103             Maths
4        104           Science
5        105 Political Science
6        106           Physics
> 
> StudentId2 = c(102, 104, 106,107, 108)
> State = c("Manglore", "Mysore","Pune", "Dehradun", "Delhi")
> df2 = data.frame(StudentId2, State) 
> df2 
  StudentId2    State
1        102 Manglore
2        104   Mysore
3        106     Pune
4        107 Dehradun
5        108    Delhi
> df = merge(x = df1, y = df2, by = "StudentId1")
Error in fix.by(by.y, y) : 'by' must specify a uniquely valid column
> df
function (x, df1, df2, ncp, log = FALSE) 
{
    if (missing(ncp)) 
        .Call(C_df, x, df1, df2, log)
    else .Call(C_dnf, x, df1, df2, ncp, log)
}
<bytecode: 0x0000022a20407db8>
<environment: namespace:stats>
> Product = c("Hindi", "English", "Maths", "Science", "Political Science", "Physics")
> df1 = data.frame(StudentId = c(101:106), Product)
> df1 
  StudentId           Product
1       101             Hindi
2       102           English
3       103             Maths
4       104           Science
5       105 Political Science
6       106           Physics
> State = c("Manglore", "Mysore","Pune", "Dehradun", "Delhi")
> df2 = data.frame(StudentId = c(102, 104, 106,107, 108), State) 
> df2 
  StudentId    State
1       102 Manglore
2       104   Mysore
3       106     Pune
4       107 Dehradun
5       108    Delhi
> df = merge(x = df1, y = df2, by = "StudentId")
> df = merge(x = df1, y = df2, by = "StudentId")
> df
  StudentId Product    State
1       102 English Manglore
2       104 Science   Mysore
3       106 Physics     Pune
> df = merge(x = df1, y = df2, by = "StudentId",all.x = TRUE)
> df
  StudentId           Product    State
1       101             Hindi     <NA>
2       102           English Manglore
3       103             Maths     <NA>
4       104           Science   Mysore
5       105 Political Science     <NA>
6       106           Physics     Pune
> df = merge(x = df1, y = df2, by = "StudentId",all.y = TRUE)
> df
  StudentId Product    State
1       102 English Manglore
2       104 Science   Mysore
3       106 Physics     Pune
4       107    <NA> Dehradun
5       108    <NA>    Delhi
> df = merge(x = df1, y = df2, by = "StudentId",all = TRUE)
> df
  StudentId           Product    State
1       101             Hindi     <NA>
2       102           English Manglore
3       103             Maths     <NA>
4       104           Science   Mysore
5       105 Political Science     <NA>
6       106           Physics     Pune
7       107              <NA> Dehradun
8       108              <NA>    Delhi
> df = merge(x = df1, y = df2, by = "StudentId",all = NULL)
Error in merge.data.frame(x = df1, y = df2, by = "StudentId", all = NULL) : 
  'all.x' must be TRUE or FALSE
> df = merge(x = df1, y = df2, by = NULL)
> df
   StudentId.x           Product StudentId.y    State
1          101             Hindi         102 Manglore
2          102           English         102 Manglore
3          103             Maths         102 Manglore
4          104           Science         102 Manglore
5          105 Political Science         102 Manglore
6          106           Physics         102 Manglore
7          101             Hindi         104   Mysore
8          102           English         104   Mysore
9          103             Maths         104   Mysore
10         104           Science         104   Mysore
11         105 Political Science         104   Mysore
12         106           Physics         104   Mysore
13         101             Hindi         106     Pune
14         102           English         106     Pune
15         103             Maths         106     Pune
16         104           Science         106     Pune
17         105 Political Science         106     Pune
18         106           Physics         106     Pune
19         101             Hindi         107 Dehradun
20         102           English         107 Dehradun
21         103             Maths         107 Dehradun
22         104           Science         107 Dehradun
23         105 Political Science         107 Dehradun
24         106           Physics         107 Dehradun
25         101             Hindi         108    Delhi
26         102           English         108    Delhi
27         103             Maths         108    Delhi
28         104           Science         108    Delhi
29         105 Political Science         108    Delhi
30         106           Physics         108    Delhi
> View(secondList)
> View(secondList)
> View(secondList)
