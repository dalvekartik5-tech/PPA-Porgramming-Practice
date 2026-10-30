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

int main()
{

  derived dobj;
    dobj.fun();
    dobj.gun();
    dobj.sun();
    

    return 0;
}