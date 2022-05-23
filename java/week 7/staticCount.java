package pkg208w1a1299;

public class staticCount {
//	int count=0;//will get memory each time when the instance is created  
        static int count=0;//will get memory only once when the instance is created  
	  
	staticCount(){  
      count++;  
      System.out.println(count);  
	}  
	  
	public static void main(String args[]){  
	//Creating objects  
	staticCount c1=new staticCount();  
	staticCount c2=new staticCount();  
	staticCount c3=new staticCount();  
	}  

}
