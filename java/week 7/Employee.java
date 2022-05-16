package rizwanjava;

class EmployeeSal{
//     eno, ename, sal, city,pincode
    int eno,pincode;
    String ename,city;
    long salary;
    
    void setFields(int no,int code,String name,String ci,long sal){
        eno = no;
        pincode = code;
        ename = name;
        city = ci;
        salary = sal;
    }
    
    void display(){
        System.out.println("Employee number is : "+eno);
        System.out.println("Employee name is : "+ename);
        System.out.println("Employee Salary is : "+salary);
        System.out.println("Employee city is : "+city);
        System.out.println("Employee pincode is : "+pincode);
        
    }
}

public class Employee {
    public static void main(String[] args) {
       EmployeeSal es = new EmployeeSal();
       es.setFields(299, 520007,"rizwan", "vijayawada", 1000000);
       es.display();
    }
}


// output :

// Employee number is : 299
// Employee name is : rizwan
// Employee Salary is : 1000000
// Employee city is : vijayawada
// Employee pincode is : 520007
