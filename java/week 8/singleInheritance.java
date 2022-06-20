package pkg208w1a1299;

class Animal{
    void eat(){
        System.out.println("Animal is eating...");
    }
}

class Dog extends Animal{
    void bark(){
        System.out.println("Dog barks like woof woof!!");
    }
}

public class singleInheritance {
    public static void main(String args[]){
        Dog dg = new Dog();
        dg.eat();
        dg.bark();
    }
}



