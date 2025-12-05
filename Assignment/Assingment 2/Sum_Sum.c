#include<stdio.h>
int main()
{
    int n,s = 0,m = 0;
    scanf("%i",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%i",&a[i]);
        if (a[i] > 0)
        {
            s = s + a[i];
        }
        else if (a[i] < 0)
        {
            m = m + a[i];
        }
        
        

    }
    printf("%i %i",s,m);
    
    
    return 0;
}