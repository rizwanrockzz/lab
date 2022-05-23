package pkg208w1a1299;

public class Vehicle {
    int vno;
    long vcost;
    String modelname;
    
     Vehicle(){
        vno = 99;
        vcost = 1800000;
        modelname = "BOLERO800";
    }
    
    Vehicle(int vno,long vcost){
        this.vno = vno;
        this.vcost = vcost;
    }
    
     Vehicle(int vno,long vcost,String modelname){
        this.vno = vno;
        this.vcost = vcost;
        this.modelname = modelname;
    }
    
    void setData(int no,long cost,String name){
        vno = no;
        vcost = cost;
        modelname = name;
    }
    
    void setData(int no,long cost){
        vno = no;
        vcost = cost;
    }
    
    void show(){
        System.out.println("Vehicle number is : "+vno);
        System.out.println("Vehicle cost is : "+vcost);
        System.out.println("Vehicle model name is : "+modelname);
        
    }
    
    public static void main(String args[]){
        Vehicle ve = new Vehicle();
//        Vehicle ve = new Vehicle(27,600000);
//        Vehicle ve = new Vehicle(100,2000000,"BHUGATI V8");
       
//        ve.setData(1,100000,"MX100");
        ve.setData(1,900000);
        ve.show();
   
    } 
}



// OUTPUT

// Vehicle number is : 1
// Vehicle cost is : 900000
// Vehicle model name is : BOLERO800
