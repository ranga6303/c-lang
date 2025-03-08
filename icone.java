class outer{
    private int a=100;
    class inner{
        void get(){
            System.out.println("in inner class a="+a);
        }
    }
}

public class icone {
    public static void main(String[] args) {
        outer obj=new outer();
        outer.inner o=obj.new inner();
        o.get();
}
}
