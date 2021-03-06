// Create a class A with the variables x,y. Create a method to set the date to x and y. 
// Create a subclass B with the variable z. create a method to set the data to z. Write a method to display the information.

package pkg208w1a1299.inheritance;

class A{
    int x,y;
    void setA(int x,int y){
        this.x = x;
        this.y = y;
    }
}

class B extends A{
    int z;
    void setB(int z){
        this.z = z;
    }
    void display(){
        System.out.println("x : "+x);
        System.out.println("y : "+y);
        System.out.println("z : "+z);
    }
}

public class que1 {
    public static void main(String args[]){
        B b = new B();
        b.setA(10, 20);
        b.setB(30);
        b.display();
    }
}


// OUTPUT

// x : 10
// y : 20
// z : 30
