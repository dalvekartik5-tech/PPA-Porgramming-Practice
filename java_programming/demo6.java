class base
{
    public
    
            int i,j;
            void fun()           
            {   System.out.println("base fun");  }

            void gun()                      
            {      System.out.println("base gun"); }

            void sun()               
            {      System.out.println("base sun");  }

            void run()               
            {      System.out.println("base run");  }
    

}

class derived extends base
{
    public
        
        int  x;
        void fun()       
        {      System.out.println("derived fun");  }

        void sun() 
        {      System.out.println("derived sun");  }

    void mun() 
    {   System.out.println("derived mun");}

    void bun()       
      {     System.out.println("derived bun");  }
}


    
class virtualdemo6
{
    public static void main(String[] args) 
{
   
     base bp=new derived();
     bp.fun();
     bp.gun();
     bp.sun();
     bp.run();
    
}
}
