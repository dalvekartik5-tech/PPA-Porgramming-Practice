#include<iostream>
using namespace std;

class airthmatic
{
 public:
    int no1;
    int no2;

    airthmatic()
    {
      this-> no1=0;
        this->no2=0;
    }

    airthmatic(int i,int j)
    {
       this->no1=i;
       this->no2=j; 
    }  

    //int addition(airthmatic *this)
    int addition()
    {
        int ans=0;
        ans = this->no1 + this->no2;
        return ans;
    }
};
int main()
{
    airthmatic aobj1(10,11);
    int result=0;
//result=addition(&obj1);
    result=aobj1.addition();
    cout<<"addition is:"<<result<<"\n";

    return 0;
}