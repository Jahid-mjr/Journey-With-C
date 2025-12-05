#include<stdio.h>
int main()
{
    int r,c,x = 0,y = 0;
    scanf("%i %i",&r,&c);
    int n[r][c];
    for (int i = 0; i < r; i++)
    {
       for (int j = 0; j < c; j++)
       {
        scanf("%i", &n[i][j]);
       }
       
    }

    if (r == c)
    {
        
        for (int i = 0; i < r; i++)
        {

             if (x == -1 || y == -1)
                {
                    break;
                }
                

            for (int j = 0; j < c; j++)
            {
               
                
                if (i == j || i+j == r-1)
                {
                    if (n[i][j] != 1)
                    {
                        x = -1;
                        printf("NO");
                        break;
                    }
                    
                }
                else
                {
                    if (n[i][j] != 0)
                    {
                        y = -1;
                        printf("NO");
                        break;
                    }
                }
                
                






            }
            
        }
        

        if (x == 0 && y == 0)
        {
            printf("YES");
        }
        




    }
    else
    {
        printf("NO");
    }
    





    
    
    return 0;
}