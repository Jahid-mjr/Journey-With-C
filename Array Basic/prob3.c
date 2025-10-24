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
    int max = a[0];
    for (int i = 0; i < x; i++)
    {
        if (max<a[i])
        {
            max = a[i];
        }
        
    }
    


    printf("The max number is %i in this array.\n",max);

    
    return 0;
}