#include<stdio.h>
int main()
{
    int x[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%i",&x[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%i\n",x[i]);
    }
    return 0;
}