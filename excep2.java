import java.util.Scanner;
class verifier{
    void message(int age)throws IllegalArgumentException{
        if(age<18){ 
            throw new IllegalArgumentException("Account openning is not possiable due to you are a minor");
        }
        else{
            System.out.println("congratulations you have chanse to open an ACCOUNT");
        }
        
    }
}
public class excep2 {
    public static void main(String[] args) {
        System.out.println("welcome to our bank ENTER YOUR AGE TO VALIDATE");
        Scanner s=new Scanner(System.in);
        int age=s.nextInt();
        verifier obj=new verifier();
      /*   try{
        obj.message(age);
        }
        catch(IllegalArgumentException e){
            System.out.println("excepton handled succefully\n"+e.getMessage());

        }*/
        obj.message(age);
        s.close();
    }
}
