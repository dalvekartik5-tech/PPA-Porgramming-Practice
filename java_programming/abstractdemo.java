abstract class base
{
    
      public  int i,j;

       public int addition(int no1,int no2)
        {
            return no1+no2;
        }

   public abstract  int substraction(int no1,int no2);
  

}
class derived extends base
{

    public int x;
         public   int substraction(int no1,int no2)
             {

                return no1-no2;
             }
public int multiplication(int no1,int no2)
             {

                return no1 * no2;
             }
    

}

class abstractdemo
{

    public static void main(String[] args) {

        int ret=0;
        derived dobj=new derived();

        ret=dobj.addition(10, 20);  
        System.out.println("addition is : "+ret);

        ret=dobj.substraction(30, 10);
        System.out.println("susbtraction is : "+ret);

        ret=dobj.multiplication(10, 5);
        System.out.println("multiplication is : "+ret);

    }
}