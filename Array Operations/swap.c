#include<stdio.h>
int main()
{
     int a = 10;
     int b = 30;
     int tem = a;
     a=b;
     b=tem;

     printf("%i %i",a,b);
    return 0;
}