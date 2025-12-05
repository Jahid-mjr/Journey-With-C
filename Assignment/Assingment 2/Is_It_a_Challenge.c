#include<stdio.h>
int main()
{
    int n;
    scanf("%i",&n);

    if (n>0)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%i ",i);
        }
        
    }
    else
    {
        for (int i = n; i <= 0; i++)
        {
            printf("%i ",i);
        }
        
    }
    
    
    return 0;
}