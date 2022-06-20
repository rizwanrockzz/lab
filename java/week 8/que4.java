package pkg208w1a1299;

class Employee{
    String name,address,gender;
    int age;
    
    void setEmp(String name,String address,String gender,int age){
        this.name = name;
        this.address = address;
        this.gender = gender;
        this.age = age;
    }
    void edisplay(){
        System.out.println("Employee name is : "+name+", address is : "+address+", gender is : "+gender+", age is : "+age);
    }
}

class FullTimeEmployee extends Employee{
    long salary;
    String desig;
    
    void setFullEmp(long salary,String desig){
        this.salary = salary;
        this.desig = desig;
    }
   
    void fdisplay(){
        System.out.println("Fulltime Employee Salary is : "+salary+", designation is : "+desig);
    }
}

class PartTimeEmployee extends Employee{
    int workhrs,rateperhr,pay;
    
    void setPartEmp(int workhrs,int rateperhr){
        this.workhrs = workhrs;
        this.rateperhr = rateperhr;
    }
    
    void caluculatepay() {
        pay = workhrs*rateperhr;
    }
    
    void pdisplay(){
        System.out.println("The pay of the part time employee is : "+pay);
    }
}

public class que4 {
    public static void main(String args[]){
        FullTimeEmployee femp = new FullTimeEmployee();
        PartTimeEmployee pemp = new PartTimeEmployee();
        femp.setEmp("rizwan", "opp taj mahal", "male", 18);
        femp.setFullEmp(10000000,"SDE-4");
        
        pemp.setEmp("Mr x","opp white house","female",23);
        pemp.setPartEmp(8,300);
        pemp.caluculatepay();
        femp.fdisplay();
        femp.edisplay();
        pemp.pdisplay();
        
    }
}

//OUTPUT
//        
//Fulltime Employee Salary is : 10000000, designation is : SDE-4
//Employee name is : rizwan, address is : opp taj mahal, gender is : male, age is : 18
//The pay of the part time employee is : 2400
