#include<stdio.h>
int main()
{
    int x;
    int count = 0;
    scanf("%i",&x);
    int a[x];

    for (int i = 0; i < x; i++)
    {
        scanf("%i",&a[i]);
    }
    for (int i = 0; i < x; i++)
    {
        if (a[i]%2!=0)
        {
           count = count + 1; ;
        }
        
    }
    
    printf("There are %i odd number in this array.\n",count);
    
    return 0;
}