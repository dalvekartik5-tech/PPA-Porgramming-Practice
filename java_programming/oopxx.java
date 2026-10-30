class airthmatic 
{
    public int no1;
    public int no2;

    public airthmatic()
    {
        this.no1=0;
        this.no2=0;
    }

    public airthmatic(int i, int j)
    {
        this.no1=i;
        this.no2=j;
    }
    int addition()
    {
        int ans=0;
        ans=this.no1 + this.no2;
        return ans;

    }

    
    int substraction()
    {
        int ans=0;
        ans=this.no1 - this.no2;
        return ans;
    }
    
}

class oopxx
{

    public static void main(String A[])
     {
        airthmatic aobj1 = new airthmatic(21,10);

        int result=0;
        result=aobj1.addition();
        System.out.println("Addition : "+result);

       result= aobj1.substraction();

       System.out.println("susbtraction is: "+result);

     }

}

