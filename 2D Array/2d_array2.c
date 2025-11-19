#include<stdio.h>
int main()
{
    int r,c,x;
    scanf("%i %i",&r,&c);
    int n[r][c];
    for (int i = 0; i < r; i++)
    {
       for (int j = 0; j < c; j++)
       {
        scanf("%i", &n[i][j]);
       }
       
    }

    scanf("%i",&x);

    for (int i = 0; i < c; i++)
    {
        printf("%i ",n[x][i]);
    }
    

    
    return 0;
}