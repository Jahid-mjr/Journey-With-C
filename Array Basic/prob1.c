#include<stdio.h>
int main()
{
    int x;
    scanf("%i",&x);
    int a[x];

    for (int i = 0; i < x; i++)
    {
        scanf("%i",&a[i]);
    }
    for (int i = 0; i < x; i++)
    {
        if (a[i]%2==0)
        {
            printf("%i ",a[i]);
        }
        
    }
    
    
    return 0;
}