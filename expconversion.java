import java.util.*;

class node{

    int data;
    node link;
    node(int value){
        this.data=value;
        this.link=null;
    }
}

class impliment{
    Scanner s=new Scanner(System.in);

node push(node top){
    System.out.println("enter charecters : ");
    node n=new node(s.nextInt());
    if(top==null){
        return n;
    }
    else{
        n.link=top;
        return n;
    }
}

void dis(node top){
    if(top==null){
        System.out.println("stack is under flow");
        return ;
    }
    else{
    System.out.println("| stack |");
    while(top!=null){
        System.out.println(top.data);
        top=top.link;
    }
}
}

node pop(node top){
    if(top==null){
        System.out.println("stack is under flow");
        return top;
    }
    else{
        top=top.link;
        return top;
    }
}
}

public class expconversion {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        impliment i=new impliment();

        int ch=0;
        node top=null;
        while(ch!=5){
            System.out.println("1.push\n2.display\n3.pop\n4.expresion convertion\n5.exit");
            ch=s.nextInt();
            switch(ch){
                case 1:
                top=i.push(top);
                break;
                case 2:
                i.dis(top);
                break;
                case 3:
                top=i.pop(top);
                break;
                case 4:
                break;
                case 5:
                break;
                default:
                System.out.println("invalid choise");
                break;
            }

        }
        s.close();
    }
    
}
