class MyThread extends Thread {
    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println("Thread: " + i);
            try {
                Thread.sleep(3000);  // 💤 Sleep for 1 second
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }
}

public class thread1 {
    public static void main(String[] args) {
        MyThread t1 = new MyThread();
        t1.start();
    }
}
