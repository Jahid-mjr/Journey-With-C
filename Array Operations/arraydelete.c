#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int ind;
    scanf("%i",&ind);

    for (int i = ind; i< n-1 ; i++)
    {
       a[i] = a[i+1];
    }
    
    // a[n-1]= 0;

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ",a[i]);
    // }
    
    // n--;;

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ",a[i]);
    // }
    


    for (int i = 0; i < n-1; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}