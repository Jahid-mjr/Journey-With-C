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

    if (r == c)
    {
        
        for (int i = 0; i < r; i++)
        {
            if (z == -1)
            {
                break;
            }
            

            for (int j = 0; j < c; j++)
            {
               

                if (i != j)
                {
                    
                    if (n[i][j] != 0 )
                    {
                        z = -1;
                        printf("Not Diogonal");
                        break;
                    }
                    



                }
                


            }
            
        }
        

        if (z == 0)
        {
            printf("Diogonal");
        }
        




    }
    else
    {
        printf("Not Diogonal");
    }
    
    

    
    
    return 0;
}