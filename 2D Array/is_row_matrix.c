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


    if (r == 1)
    {
        printf("This is a row matrix");
    }
    else
    {
        printf("This is not a row matrix");
    }
    
    



    
    return 0;
}