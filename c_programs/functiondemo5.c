#include<stdio.h>

void addition(int no1,int no2)
{
    int result=0;
    result=no1+no2;    //business logic
    printf("\nAddition is : %d",result);
}
int main()
{

int value1=0, value2=0;

printf("Enter first number : ");
scanf("%d",&value1);

printf("\nEnter second number : ");
scanf("%d",&value2);

addition(value1,value2);

    return 0;
}