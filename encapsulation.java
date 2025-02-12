import java.util.Scanner;
class Employee{
    private String name;
    private int salary,loan;
    public String get(){
        return name;
    }

    
    public int getsalary(){
            return salary;

    }

    public int getloan(){
        return loan;
    }

    public void set(String n, int s, int l){
        this.name=n;
        this.salary=s;
        this.loan=l;
    }
    }

    public class  encapsulation{
        
        public static void main(String[] args) {
            Scanner s=new Scanner(System.in);
            Employee e=new Employee();
            System.out.println("enetr employee name : ");
            String name = s.nextLine();
            System.out.println("enter salary : ");
            int sala=s.nextInt();
            System.out.println("enter loan : ");
            int loan=s.nextInt();
           e.set(name,sala,loan);

            System.out.println("employye name : "+e.get());
            System.out.println("employee salry : "+e.getsalary());
            System.out.println("employee loan : "+e.getloan());
            System.out.println("employee loan by direct : "+loan);
            
            
            s.close();


            
        }
    }
