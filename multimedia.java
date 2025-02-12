interface playable{
    void play();
    void stop();
    
}

abstract class media implements playable{
 

   abstract void info();
}

class audio extends media{
   public void info(){
        System.out.println("audio file ");
    }

    public  void play(){
        System.out.println("audio strted playing ");

    }

    public void stop(){
        System.out.println("audio stoped playing");
    }
}

class video extends media{
    public void info(){
        System.out.println("video file");
    }
 
    public  void play(){
        System.out.println("video strted playing ");
    }

    
    public  void pause(){
        System.out.println("video paused");

    }

    public void stop(){
        System.out.println("video stoped playing");
    }
}

class streamingcontent extends media{
   public void info(){
        System.out.println("streamingcontent file");
    }


    public  void play(){
        System.out.println("streamingcontent strted playing ");

    }

    public  void pause(){
        System.out.println("streamingcontent paused");

    }

    public void stop(){
        System.out.println("streamingcontent stoped playing");
    }

    public void buffer(){
        System.out.println("streamingcontent buffering");
    }
}

public class multimedia{
public static void main(String[] args){
media a=new audio();
media b=new video();
media c=new streamingcontent();
playable d=new audio();
playable e=new video();
playable f=new streamingcontent();
video g=new video();
streamingcontent h=new streamingcontent();
a.info();
d.play();
d.stop();
b.info();
g.pause();
e.play();
e.stop();
c.info();
h.pause();
h.buffer();
f.play();
f.stop();


}
}

