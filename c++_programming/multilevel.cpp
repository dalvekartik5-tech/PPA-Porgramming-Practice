#include<iostream>
using namespace std;

class base
{
    public:
        int i,j;

        base()
        {
            cout<<"inside base constructor\n";
        }

        ~base()
        {
            cout<<"inside base destructor\n";
        }

        void fun()
        {
            cout<<"inside base fun\n";
        }

        void gun()
        {
            cout<<"inside base gun\n";
        }

};

class derived:public base
{

    public:
        int x,y;

        derived()
        {
            cout<<"inside derived constructor\n";
        }

        ~derived()
        {
            cout<<"inside derived destructor\n";
        }
       
        void sun()
        {
            cout<<"inside derived sun\n";
        }

};

class derivedX : public derived
{
    public:
    int a;

    derivedX()
    {
        cout<<"inside derivedx constructor\n";
    }
     ~derivedX()
    {
        cout<<"inside derivedx destructor\n";
    }

    void run()
    {

        cout<<"inside derivedx run\n";
    }
};


int main()
{

  derivedX dobj;
    dobj.fun();
    dobj.gun();
    dobj.sun();
    dobj.run();
    

    return 0;
}