  import java.util.*;

class exception2x
{
  public static void main(String A[])
   {
    
    Scanner sobj=new Scanner (System.in);

        int arr[]={11,21,51,101,111};
        int index=0;

    try{

    System.out.println("Enter the index : ");
    index=sobj.nextInt();

    System.out.println("element is  = "+arr[index]);
    
}

  catch(ArrayIndexOutOfBoundsException aobj)
  {
    System.out.println("isnide catch"+aobj);
  }
}
  
} 
 