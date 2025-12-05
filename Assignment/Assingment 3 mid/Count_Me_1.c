#include<stdio.h>
int main()
{
    int n,d = 0,t = 0;
    scanf("%i",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%i",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            d++;
        }
        else if (a[i] % 3 == 0)
        {
            t++;
        }
    
        
       
    }

    printf("%i %i",d,t);
    
    return 0;
}