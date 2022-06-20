// Create a class Q with a variable q and consider default constructor for setting to q. Create a subclass R with a variable r and consider 
// default constructor for setting to r. Create a subclass to R as S with a variable s and consider a default constructor for setting for s. 
// Create a display function in each of the classes. Create a main method to call the functions

package pkg208w1a1299.inheritance;

class Q{
    int q;
    Q(){
        q = 10;
    }
    
    void display(){
        System.out.println("q : "+q);
    }
}

class R extends Q{
    int r;
    R(){
        r = 20;
    }
    
    void display(){
        System.out.println("r : "+r);
    }
}

class S extends R{
    int s;
    S(){
        s = 30;
    }
    
    void display(){
        System.out.println("s : "+s);
    }
}

public class que2 {
    public static void main(String args[]){
        Q q = new Q();
        R r = new R();
        S s = new S();
        q.display();
        r.display();
        s.display();
    }
}


// OUTPUT

// q : 10
// r : 20
// s : 30
