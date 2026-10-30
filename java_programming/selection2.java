import java.util.*;
class selection2
{
public static void main(String A[])
{

int age=0;
Scanner sobj=new Scanner (System.in);

System.out.println("Enter your age : ");
age=sobj.nextInt();

if(age>=18)
{
    System.out.println("allowed");
}
else
{
    System.out.println("not allowed");
}

}
}
