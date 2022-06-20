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
