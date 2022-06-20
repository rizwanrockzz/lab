package pkg208w1a1299.inheritance;

class Person{
    String fname,lname;
    void setPerson(String fname,String lname){
        this.fname = fname;
        this.lname = lname;
    }
}

class Employee extends Person{
    int eno;
    String edept;
    long esal;
    
    void setEmployee(int eno,String edept,long esal){
        this.eno = eno;
        this.edept = edept;
        this.esal = esal;
    }
    
    void display(){
        System.out.println("Employe name is : "+fname+" "+lname);
        System.out.println("Employee no is : "+eno+", department : "+edept+", salary is : "+esal);
    }

}

public class que3 {
    public static void main(String args[]){
        Employee e = new Employee();
        e.setPerson("rizwam", "md");
        e.setEmployee(1, "Development", 10000000);
        e.display();
    }
}


// OUTPUT

// Employe name is : rizwam md
// Employee no is : 1, department : Development, salary is : 10000000
