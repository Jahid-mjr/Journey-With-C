#include<stdio.h>
int main()
{
    int r,c,z = 0;
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

        if (z == -1)
        {
            break;
        }
        

       for (int j = 0; j < c; j++)
       {
        
        if (n[i][j] != 0)
        {
           z = -1;
           break;
        }
        


       }
       



    }




    if (z == 0)
    {
       printf("This is a zero matrix");
    }
    else
    {
        printf("This is not a zero matrix");
    }
    
    
    
    return 0;
}