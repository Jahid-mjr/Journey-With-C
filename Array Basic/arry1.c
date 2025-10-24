#include<stdio.h>
int main()
{

    int y;
    scanf("%i",&y);
    int x[y];
    for (int i = 0; i < y; i++)
    {
        scanf("%i",&x[i]);
    }
    for (int i = y-1; i >=0; i--)
    {
        printf("%i\n",x[i]);
    }
    return 0;
}