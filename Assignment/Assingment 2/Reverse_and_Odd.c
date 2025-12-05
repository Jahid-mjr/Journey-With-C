#include<stdio.h>
int main()
{
    int n;
    scanf("%i",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%i",&a[i]);
    }

    for (int i = n-1; i >= 0 ; i--)
    {
       if (i%2 != 0)
       {
        printf("%i ",a[i]);
       }
       
    }
    
    
    return 0;
}