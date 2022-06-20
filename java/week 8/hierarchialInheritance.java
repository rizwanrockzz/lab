package pkg208w1a1299;

class Animal{
    void eat(){
        System.out.println("Animal is eating ..");
    }
}

class Dogs extends Animal{
    void bark(){
        System.out.println("Dog is barking..");
    }
}

class Cat extends Animal{
    void sound(){
        System.out.println("Cat says meow meow..");
    }
}



public class hierarchialInheritance {
    public static void main(String args[]){
        Cat ct = new Cat();
        Dogs dg = new Dogs();
        ct.sound();
        ct.eat();
        System.out.println();
        System.out.println();
        dg.bark();
        dg.eat();
    }
}
