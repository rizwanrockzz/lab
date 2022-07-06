package pkg208w1a1299.inheritance;

//Create a base class called person  
//with SSN  and name as data types with getdata and display as member functions. Derive a  new class called student 
//with rollno, branch,mark1,mark2,mark3 as datamembers and getdata and display  as member functions and finally 
//derive a new  class called grade from student class in that calculate the average for marks and display the  grade 
//for the  student 
//            a. A grade >=90%
//            b. B grade>=80%
//            c. C grade>=70%
//            d. Less than 70% fail. 


class Persons{
    long ssn;
    String name;
    void getData(long ssn,String name){
        this.ssn = ssn;
        this.name = name;
    }
    
    void display(){
        System.out.println("Person ssn number is : "+ssn+" name is : "+name);
    }
}

class Student extends Persons{
//    rollno, branch,mark1,mark2,mark3
    int rollno;
    float mark1,mark2,mark3;
    String branch;
    void setData(int rollno,float mark1,float mark2,float mark3,String branch){
        this.rollno = rollno;
        this.mark1 = mark1;
        this.mark2 = mark2;
        this.mark3 = mark3;
        this.branch = branch;
        System.out.println(mark1+" "+mark2+" "+mark3);
    }
    
}

class grade extends Student{  
   float average ;
    
    void printGrade(){
        
        System.out.println(mark1+" "+mark2+" "+mark3+" grade ");
        average = ((mark1)+(mark2)+(mark3))/3;
        System.out.println(average);
        
        if(average >=90){
            System.out.println("A grade");
        }
        else if(average>=80 && average<90){
            System.out.println("B grade");
        }
        else if(average>=70 && average<80){
            System.out.println("C grade");
        }
        else{
            System.out.println("Fail");
        }
    } 
}

public class Main {
    public static void main(String args[]){
        // Persons ps = new Persons();
        // Student st = new Student();
        grade gd = new grade();
        gd.getData(123456789, "mr x");
        gd.setData(1,70,80,90,"IT");
        // gd.average();
        gd.printGrade();
    }
}
