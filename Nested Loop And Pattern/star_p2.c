#include<stdio.h>
int main()
{
    int a;
    scanf("%i",&a);

    for (int i = a ; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
      }
        printf("\n");
    }
    
    // int star = n;
    // for (int i = 1; i <= a; i++)
    // {
    //     for (int j = 1; j <= star; j++)
    //     {
    //         printf("*");
    //   }
    //     printf("\n");
    //     star--;
    // }


    return 0;
}