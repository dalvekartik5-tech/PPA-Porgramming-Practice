#include<stdio.h>
int main()
{
 int arr[4]={10,20,30,40};

 printf("%d\n",arr);//100
  printf("%d\n",&arr);//100

   printf("%d\n",arr+1);
   printf("%d\n",(&arr)+1);



return 0;

}