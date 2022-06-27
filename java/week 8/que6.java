//Create a class Employer with company_name and city. Create a parameterised method companyDetails(String, String) 
//to set the values to the two variables.  Create a showCompanyDetails() method to display the company information.
//Create a subclass Employee with eno,ename,esal. Create a parameterized constructor to set the values to these variables. 
//create a showEmployee() to display the information.
//Create a main method to test the classes


package pkg208w1a1299.inheritance;

class Employer{
    String company_name,city;
    void companyDetails(String company_name,String city){
        this.company_name = company_name;
        this.city = city;
    }
    
    void showCompanyDetails(){
        System.out.println("Comapany name is : "+company_name+"\nCity is : "+city);
    }
}

class Employeee extends Employer{
    int eno;
    String ename;
    long esal;
    Employeee(int eno,String ename,long esal){
        this.eno = eno;
        this.ename = ename;
        this.esal = esal;
    }
    
    void showEmployee(){
        System.out.println("Employee no is : "+eno+" name is : "+ename+" salary is : "+esal);
    }
}

public class que6 {
    public static void main(String args[]){
        Employeee emp = new Employeee(1,"mr x",1000000);
        emp.companyDetails("tech solutions","VJA");
        emp.showCompanyDetails();
        emp.showEmployee();
        
    }
}

// OUTPUT

// Comapany name is : tech solutions
// City is : VJA
// Employee no is : 1 name is : mr x salary is : 1000000

