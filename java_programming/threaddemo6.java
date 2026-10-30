class threaddemo5
{
    public static void main(String[] args) throws Exception
    {
        System.out.println("inside main thread");

        demo dobj1=new demo();
        demo dobj2=new demo();

        dobj1.start();
        dobj2.start();

        dobj1.join();
        dobj2.join();

        System.out.println("End of main thread");
    
    }    
}

class demo extends Thread
{
    public void run()
    {
        System.out.println("Thread is running.....");
    }
}