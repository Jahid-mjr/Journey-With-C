#include<stdio.h>
int main()
{
    int a;
    scanf("%i",&a);

    for (int i = 1; i <= a; i++)
    {
        if ((i%3== 0) && (i%7==0))
        {
            printf("%i\n",i);
        }
        
    }
    
    return 0;
}