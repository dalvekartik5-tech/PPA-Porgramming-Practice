class demo
{
    public demo()
    {
        System.out.println("Inside  default comstructor");
    }

    public demo(int i,int j)
    {
        System.out.println("Inside parameterized comstructor");
    }
}

class constructor_demo
{
    public static void main(String A[])
    {
        demo dobj1=new demo();
        demo dobj2=new demo(11,21);

    }
}