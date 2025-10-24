#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int val, ind;
    scanf("%i %i",&val,&ind);

    for (int i = n; i >= ind+1; i--)
    {
       a[i] = a[i-1];
    }
    
    a[ind]= val;

    for (int i = 0; i < n+1; i++)
    {
        printf("%d ",a[i]);
    }
    

    return 0;
}