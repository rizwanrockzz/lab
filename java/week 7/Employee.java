// 2. Create a class Employee withe fileds eno, ename, sal, city,pincode. 
// Set the values using parameterised method. create another method to update the sal by Rs.1000. 
// Print the information of employee before and after the update salary

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
    
    void salaryIncrement(){
        salary = salary+1000;
    }
}

public class Employee {
    public static void main(String[] args) {
       EmployeeSal es = new EmployeeSal();
       es.setFields(299, 520007,"rizwan", "vijayawada", 1000000);
       es.display();
       es.salaryIncrement();
       System.out.println();
       System.out.println();
       es.display();
    }
}




// OUTPUT

// Employee number is : 299
// Employee name is : rizwan
// Employee Salary is : 1000000
// Employee city is : vijayawada
// Employee pincode is : 520007


// Employee number is : 299
// Employee name is : rizwan
// Employee Salary is : 1001000
// Employee city is : vijayawada
// Employee pincode is : 520007
