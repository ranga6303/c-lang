class method{
    void inner(){
        System.out.println("in inner method ");
        class inmethod{
            void run(){
                System.out.println("from innnermethod class ");
            }
           
        }
        inmethod obj=new inmethod();
        obj.run();
    }
}
public class ictwo {
    public static void main(String[] args) {
        System.out.println("from main method");
        method  obj=new method();
        obj.inner();

    }
    
}
