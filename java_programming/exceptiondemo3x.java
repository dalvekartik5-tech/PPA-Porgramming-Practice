 import java.util.*;



class exception 
{
  public static void main(String A[])
   {
    
    Scanner sobj=new Scanner (System.in);

    int no1=0, no2=0, ans=0;

    System.out.println("Enter first number : ");
    no1=sobj.nextInt();

    System.out.println("Enter 2nd number : ");
    no2=sobj.nextInt();

    ans=Demo.division(no1,no2);
    System.out.println("division = "+ans);
  }

}
class Demo{

    public static int division(int no1,int no2) throws ArithmeticException
    {
        return no1/no2;
    }
}
 
