#include<stdio.h>
int addition(int value1 , int value2)
{
int result=0;
result=value1 + value2;
return result;
}
int main()
{
int no1=11;
int no2=10;
int ans;
ans=addition(no1,no2);

printf("Addition is %d",ans);
return 0;

}
