#include<iostream>
using namespace std;

struct  airthmatic
{
    int no1;
    int no2;
};

int main()
{
   airthmatic aobj1;
   airthmatic aobj2;

   aobj1.no1=0;
   aobj1.no2=0;

   aobj2.no1=10;
   aobj2.no2=11;

   
    cout<<aobj1.no1<<"\n";
    cout<<aobj1.no2<<"\n";
    
    cout<<aobj2.no1<<"\n";
    cout<<aobj2.no2<<"\n";
    return 0;
}