 class marvel
 {
    public int no1;
    public int no2;

public void fun()
{
    System.out.println("Inside Fun");
}
 }
 
 class encap
 {
    public static void main(String A[])
    {
       marvel mobj=new marvel();
       
       mobj.fun();
       System.out.println(mobj.no1);
       
       System.out.println(mobj.no2);

    }
 }
    

