import java.util.Scanner;
public class excep1 {
    public static void main(String[] args) {
        Scanner s=new  Scanner(System.in);
        System.out.println("enter number 2 numbers : ");
        int a=s.nextInt(),b=s.nextInt(),r;
        try{
            r=a/b; 
            //hi user
            
        }
        catch(ArithmeticException e){
            System.out.println("exception handeled succefully: "+e.getMessage());
            r=a/1;
        }
        System.out.println("result is : "+r);
        s.close();
        
    }
}


