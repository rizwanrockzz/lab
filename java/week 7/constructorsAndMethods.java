// 1. Create a class with fileds sno, sname,smarks. Set the values to these fields with
// a. Default method or
// b. Parameterised method or
// c. Default Consrucor or
// d. Parameterised constructor
// Display the information using display() method

package rizwanjava;

class Employee{
    int sno,smarks;
    String sname;
    
    // Default constructor
    Employee(){
        sno = 1;
        sname = "mrname";
        smarks = 99;
    }
       
    // Parameterized constructor
    Employee(int sno,int smarks,String sname){
        this.sno = sno;
        this.sname = sname;
        this.smarks = smarks;
    }
    
    // Default Method
    void setDefault(){
        sno = 3;
        sname = "rockzz";
        smarks = 92;
    }
    
    // Parameterized Method
    void setFields(int a,int b,String c){
        sno = a;
        smarks = b;
        sname = c;
    }
    
    void display(){
        System.out.println("Sno is : "+sno);
        System.out.println("sname is : "+sname);
        System.out.println("smarks is : "+smarks);
    }
}


public class constructorsAndMethods {
    public static void main(String args[]){
        Employee emp = new Employee();
//        Employee emp = new Employee(2,99,"rizwan");
//        emp.setDefault();
        emp.setFields(4, 94, "rizwan rockzz");
        emp.display();
    }
}


// output

// Sno is : 4
// sname is : rizwan rockzz
// smarks is : 94
