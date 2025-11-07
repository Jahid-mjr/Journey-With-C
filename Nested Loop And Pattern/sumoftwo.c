#include<stdio.h>
int main()
{
    int a;
    int x = 8;
    scanf("%i",&a);
    int b[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%i",&b[i]);
    }

    for (int i = 0; i < a-1; i++)
    {
        for (int j = i+1; j < a; j++)
        {
            if (b[i]+b[j]==x)
            {
                printf("%i %i\n",b[i],b[j]);
                break;
            }
            
        }
        
    }
    
    


    return 0;
}