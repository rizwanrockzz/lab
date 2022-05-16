package rizwanjava;

//bno, bname, price, no_of_pages
class BookDetails{
    int bno,pages,price;
    String bname;
    
    BookDetails(int no,int nopages,int rate,String name){
        bno = no;
        bname = name;
        pages = nopages;
        price = rate;
    }
    
    void display(){
        System.out.println("Book no is : "+bno);
        System.out.println("Book name is : "+bname);
        System.out.println("No of pages in book are : "+pages);
        System.out.println("Book price is : "+price);
        
    }
    
    void ApplyDiscount(){
        price = price-100;
    }
}

public class Book {
    public static void main(String args[]){
        BookDetails bk = new BookDetails(1101,155,499,"The Secret");
        System.out.println("Before Discount");
        bk.display();
        System.out.println();
        System.out.println("After Discount");
        bk.ApplyDiscount();
        bk.display();
        
    }
}


//  output

//Before Discount
//Book no is : 1101
//Book name is : The Secret
//No of pages in book are : 155
//Book price is : 499
//
//After Discount
//Book no is : 1101
//Book name is : The Secret
//No of pages in book are : 155
//Book price is : 399
