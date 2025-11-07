#include<stdio.h>

void sum(int a, int b)
{

 printf("%i",a+b);

}
int main()
{
    int a,b;
    scanf("%i %i",&a,&b);
    sum(a,b);
    return 0;
}