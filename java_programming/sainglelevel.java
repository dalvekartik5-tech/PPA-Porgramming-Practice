class base
{
    public int i,j;
    public base()
    {
        System.out.println("Inside base constructor");
    }

    public void fun()
    {
        System.out.println("Inside base fun");
    }
    
    public void gun()
    {
        System.out.println("Inside base gun");
    }
}

class derived extends base
{
 public int x,y;

 public derived()
 {
    System.out.println("inside derived constructor");
 }

 public void sun()
 {
    System.out.println("inside derived sun");
 }
}

class sainglelevel
{
    public static void main(String A[] )
    {
     derived dobj = new derived();

     dobj.fun();
     dobj.gun();
     dobj.sun();
     
    }
}