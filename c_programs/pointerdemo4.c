#include<stdio.h>

int main()
{
char ch='A';
int no=11;
float marks=90.78f;
double d=98.5679;

char *cp=&ch;
int *ip=&no;
float *fp=&marks;
double *dp=&d;


printf("%c\n",*cp);
printf("%d\n",*ip);

printf("%f\n",*fp);

printf("%lf\n",*dp);



    return 0;
}