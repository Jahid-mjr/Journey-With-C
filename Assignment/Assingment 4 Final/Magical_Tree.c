#include<stdio.h>
int main()
{
    int n,m;
    scanf("%i",&n);

    m = ((n-1)/2) + 6;

    int star=1,space = m-1;

    for (int i = 1; i <= m; i++)
    {
        for (int k = 0; k < space; k++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        

        printf("\n");
        star +=2;
        space--;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("     ");
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    







    return 0;
}