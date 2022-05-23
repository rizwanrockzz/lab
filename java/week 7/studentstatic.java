package pkg208w1a1299;

class Student{  
    int rollno;
    String name;  
    static String college ="VRSEC";
  
    Student(int r, String n){  
    rollno = r;  
    name = n;  
    }  
    //method to display the values  
    void display (){
        System.out.println(rollno+" "+name+" "+college);
    }  
 }  
	 
public class studentstatic{  
    public static void main(String args[]){  
    Student s1 = new Student(99,"Varma");  
    Student s2 = new Student(100,"Surma");  

    s1.display();  
    s2.display();  
    }  
}  
