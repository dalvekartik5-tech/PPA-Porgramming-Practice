import java.util.*;

class exception 
{
  public static void main(String A[])
   {
    
    Scanner sobj=new Scanner (System.in);

    int no1=0, no2=0, ans=0;
    try
    {
    System.out.println("Enter first number : ");
    no1=sobj.nextInt();

    System.out.println("Enter 2nd number : ");
    no2=sobj.nextInt();

    ans=no1/no2; //exception prone code

    }

    catch(ArithmeticException aobj)
    {
        System.out.println("eception occured"+aobj);
    }

    finally
    {
        System.out.println("inside finally");
    }

    System.out.println("division = "+ans);
  }
} 
