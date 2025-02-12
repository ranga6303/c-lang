interface  smartdevice{
void oprate();
}

class fan implements smartdevice{
   public void oprate(){
        System.out.println("fan turn on");
    }

}

class light implements smartdevice{
    public void oprate(){
        System.out.println("light turn on");
    }
}

class thermostat implements smartdevice{
    public void oprate(){
        System.out.println("thrmostat turn on");

    }
}

public class shome {
    public static void main(String[] args) {
    smartdevice a=new light();
    a.oprate();
    smartdevice b=new fan();
    b.oprate();
    smartdevice c=new thermostat();
    c.oprate();

    }
    
}
