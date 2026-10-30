#include<stdio.h>

#pragma pack(1)
struct demo
{
  int i;
  float f;
  double d;
};

int main()
{
struct demo dobj;

dobj.i=11;
dobj.f=3.14;
dobj.d=90.8799;

printf("%d\n",dobj.i);
printf("%f\n",dobj.f);
printf("%lf\n",dobj.d);
    return 0;
}