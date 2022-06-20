package pkg208w1a1299;

class Grandfather{
    void toplevel(){
        System.out.println("I am GrandFather");
    }
}

class Father extends Grandfather{
    void authority(){
        System.out.println("I am Father");
    }
}

class Son extends Father{
    void display(){
        System.out.println("I am Son");
    }
}

public class multilevelInheritance {
    public static void main(String args[]){
        Son sn = new Son();
        sn.display();
        sn.toplevel();
        sn.authority();
    }
}
