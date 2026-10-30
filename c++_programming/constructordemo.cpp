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
   ~PPA()
   {
    cout<<"inside destrutor\n";
   }

};
int main()
{
PPA pobj1;
PPA pobj2;



    return 0;
}