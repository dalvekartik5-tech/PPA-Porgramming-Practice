#include<iostream>
using namespace std;

class airthmatic
{
 public:
    int no1;
    int no2;

    airthmatic()
    {
        no1=0;
        no2=0;
    }

    airthmatic(int i,int j)
    {
       no1=i;
       no2=j; 
    }  
};
int main()
{
    airthmatic aobj1;

    airthmatic aobj2(10,11);

    cout<<aobj1.no1<<"\n";
    cout<<aobj1.no2<<"\n";
    
    cout<<aobj2.no1<<"\n";
    cout<<aobj2.no2<<"\n";
    return 0;
}