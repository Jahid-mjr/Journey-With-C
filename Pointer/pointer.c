#include<stdio.h>
int main()
{
    int a = 100;
    int* b = &a;

    printf("%i\n",a);
    printf("%p\n",&a);
    printf("%i\n",*b);

    *b = 200;
    printf("%i\n",a);
    return 0;
}