#include<stdio.h>
int main()
{
    int a[5]= {12,52,63,878,78};
    *(a+3)=100;
    *(a+2)=100;

    for (int i = 0; i < 5; i++)
    {
        printf("%i ",a[i]);
    }
    
    return 0;
}