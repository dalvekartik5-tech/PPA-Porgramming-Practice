class classthreaddemo1 
{
    public static void main(String[] args)
    {
        System.out.println("inside main");
        Thread t = Thread.currentThread();


        System.out.println("current thread name is : "+t.getName());

        System.out.println("current thread id: "+t.getId());

        System.out.println("thread is alive or not : "+t.isAlive());

        System.out.println("Thread priority : "+t.getPriority());
    }    
}
