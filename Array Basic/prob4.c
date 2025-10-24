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
    int min = a[0];
    for (int i = 0; i < x; i++)
    {
        if (min>a[i])
        {
            min = a[i];
        }
        
    }
    


    printf("The min number is %i in this array.\n",min);

    
    return 0;
}