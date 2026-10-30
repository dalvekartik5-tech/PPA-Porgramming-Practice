class demo implements Runnable
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

        Thread dobj1=new Thread(new demo());
         Thread dobj2=new Thread(new demo());
         
         dobj1.start();
         dobj2.start();
        
      
    }    
}