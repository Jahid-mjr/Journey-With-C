#include<stdio.h>
void fun(int* p)
{
 *p = 20;
 printf("%p\n",&p);
}


int main()
{
    int x = 10;
    fun(&x);
    printf("%i\n",x);
    printf("%p\n",&x);
    return 0;
}