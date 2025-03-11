//COUSTAM EXCEPTION HANDLING
import java.util.Scanner;
class UseridException extends Exception{
    public UseridException(String msg){
        super(msg);
    }
}

class AgeException extends Exception{
    public AgeException(String msg){
        super(msg);
    }
}

class check{
    public check(int pin,int age)throws AgeException,UseridException{
        if(String.valueOf(pin).length()!=10){
            throw new UseridException("id must contain 10 digits");
        }
        if(age<18){
            throw new AgeException("candidate must be major");
        }
    }
    }

public class excep3 {
    public static void main(String[] args) {
        System.out.println("enter userid : ");
        Scanner s=new Scanner(System.in);
        int num=s.nextInt();
        System.out.println("enter age : ");
        int age=s.nextInt();
        try {
            
            check obj=new check(num,age);
            
        } catch (AgeException e) {
            System.out.println("exception handeled \n "+e);
        }
        catch(UseridException e){
            System.out.println("exception handeled \n"+e);
        }
        System.out.println("continues moving the main method");
        s.close();
    }
    
}
