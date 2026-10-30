#include<iostream>

using namespace std;

class PPA
{
public:
    int no1;
    int no2;
//default constructor
PPA()
   {
    cout<<"Inside default constructor\n";
   }

   //parameterized constructor
PPA(int a,int b)
   {
    cout<<"Inside parameterized constructor\n";
   }

   //copy cons
PPA(PPA &obj)
{
    cout<<"Inside copy constructor\n";
}
    
~PPA()
   {
    cout<<"inside destrutor\n";
   }

};
int main()
{
PPA pobj1;      //default
PPA pobj2(11,21);  //parametrized
PPA pobj3(pobj1); //copy

    return 0;
}