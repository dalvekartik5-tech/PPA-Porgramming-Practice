class Marvellous
{
    public int i,j;
    public  Marvellous(int a,int b)
    {
        this.i=a;
        this.j=b;
    }
    public String toString()
    {
        return "value of i : "+this.i + " Value of j : "+this.j;
    }
}

class DemotoStringxx
{
    public static void main(String[] args) {
        Marvellous mobj1=new Marvellous(51,210);
         Marvellous mobj2=new Marvellous(51,210);

        System.out.println(mobj1);//mobj1.toString
        System.out.println(mobj2);//mobj2.toString

        
    }
}