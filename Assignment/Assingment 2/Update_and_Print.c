#include<stdio.h>
int main()
{
    int n,o,p;
    scanf("%i",&n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%i",&a[i]);
    }
    scanf("%i %i",&o,&p);
    a[o] = p;

    for (int i = n-1; i >=0; i--)
    {
        printf("%i ",a[i]);
    }
    
    
    return 0;
}