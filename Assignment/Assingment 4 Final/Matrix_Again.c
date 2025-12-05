#include<stdio.h>
int main()
{
    int r,c,x,y;
    scanf("%i %i",&r,&c);
    int n[r][c];
    for (int i = 0; i < r; i++)
    {
       for (int j = 0; j < c; j++)
       {
        scanf("%i", &n[i][j]);
       }
       
    }

    for (int i = 0; i < c; i++)
    {
        printf("%i ", n[r-1][i]);

    }

    printf("\n");
    
    for (int i = 0; i < r; i++)
    {
        printf("%i ", n[i][c-1]);

    }
    




    
    
    return 0;
}