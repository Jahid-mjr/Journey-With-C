#include<stdio.h>
int main()
{
    int r,c;
    scanf("%i %i",&r,&c);
    int n[r][c];
    for (int i = 0; i < r; i++)
    {
       for (int j = 0; j < c; j++)
       {
        scanf("%i", &n[i][j]);
       }
       
    }


    for (int i = 0; i < r; i++)
    {
       for (int j = 0; j < c; j++)
       {
        printf("%i ", n[i][j]);
       }
       
       printf("\n");



    }
    
    return 0;
}