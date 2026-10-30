#include<iostream>
using namespace std;

 class basea
 {
    public:
    int i,j;

    basea()
    {
        cout<<"inside basea constructor\n";
    }
    ~basea()
    {
        cout<<"inside basea destructor\n";
    }
    void fun()
{
    cout<<"Inside basea fun\n";
}

 };
 class baseb
 {
    public:
    int x,y;

    baseb()
    {
        cout<<"inside baseb constructor\n";
    }
    ~baseb()
    {
        cout<<"inside baseb destructor\n";
    }
    void gun()
{
    cout<<"Inside baseb gun\n";
}
 
 };

class derived: public basea, baseb
{
        public:
        int a;

        derived()
        {
            cout<<"inside derived constructor\n";
        }

        
        ~derived()
        {
            cout<<"inside derived destructor\n";
        }
        void run()
        {
            cout<<"Inside run\n";
        }

};


int main()
{

    derived dobj;
    


    return 0;
}