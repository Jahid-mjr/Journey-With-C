#include<stdio.h>
int main()
{
    int a;
    scanf("%i",&a);
    int star=1,space = a-1;

    for (int i = 1; i <=a; i++)
    {
        for (int k = 0; k <= space; k++)
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
    
    return 0;
}