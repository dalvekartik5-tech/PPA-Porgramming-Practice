class demo extends Thread
{
    public void run()
    {
        System.out.println("Thread is running.....");
    }
}

class threaddemo5

{
    public static void main(String[] args)
    {
        System.out.println("inside main thread");

        demo dobj1=new demo();
        demo dobj2=new demo();

        dobj1.start();
        dobj2.start();
System.out.println("End of main thread");//issue
    
    }    
}