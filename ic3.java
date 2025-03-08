class outer{
    void start(){
        System.out.println("in outter class");
    }
    static class inner{
       static void run(){
                    System.out.println("in innner class");
                }
        
            }
        }
        
        public class ic3 {
            public static void main(String[] args) {
                System.out.println("in main method");
                outer.inner.run();
                
    }
    
}
