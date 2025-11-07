#include<stdio.h>
int main()
{
    int n;
    int x = 0;
    scanf("%i",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%i",&a[i]);
    }
   
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]> a[j])
            {
                x = a[i];
                a[i]=a[j];
                a[j]=x;
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%i ",a[i]);
    }
    
    

    return 0;
}