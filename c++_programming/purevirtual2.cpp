#include<iostream>
using namespace std;

#pragma pack(1)
class base
{
    public:
        int i,j;

        int addition(int no1,int no2)
        {
            return no1+no2;
        }

    virtual int substraction(int no1,int no2)=0;
    

};
#pragma pack(1)
class derived:public base
{

    public:
        int x;
             int substraction(int no1,int no2)
             {

                return no1-no2;
             }
 int multiplication(int no1,int no2)
             {

                return no1 * no2;
             }
    

};

    int main()
{
    derived dobj;
    int ret=0;

   ret=dobj.addition(10,20);
   cout<<"Addition is : "<<ret<<"\n";

ret=dobj.substraction(20,10);
   cout<<"sub is : "<<ret<<"\n";

   ret=dobj.multiplication(10,20);
   cout<<"multi is : "<<ret<<"\n";

   cout<<sizeof(base)<<" : size of base"<<"\n";

   
   cout<<sizeof(derived)<<" : size of derived"<<"\n";
   


    return 0;
}