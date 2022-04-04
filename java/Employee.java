import java.util.*;

public class Employee
{
	public static void main(String[] args) {
	    
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter employee number : ");
		int emp_no = sc.nextInt();
		System.out.print("Enter employee name : ");
		String emp_name = sc.next();
		System.out.print("Enter contact of employee : ");
		long contact = sc.nextLong();
		System.out.print("Enter the employee salary : ");
		long salary = sc.nextLong();
		
		System.out.println("The name of the employee is : "+emp_name);
		System.out.println("The no of employee is : "+emp_no);
		System.out.println("The salary of the employee is : "+salary);
		System.out.println("The contact of employee is : "+contact);
		
	}
}
