class demo implements Runnable
{
    public void run()
    {
        System.out.println("Thread is running.....");
    }
}

class threaddemo3

{
    public static void main(String[] args)
    {
        System.out.println("inside main thread");

        demo dobj1=new demo();
        demo dobj2=new demo();
          dobj1.start();//error
        dobj2.start();//error
    }    
}