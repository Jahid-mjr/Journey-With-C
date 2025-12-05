#include<stdio.h>
int main()
{
    int T, m, n, d, f;
    scanf("%i", &T);
    while (T--)
    {
        scanf("%i %i %i",&m, &n, &d);

        if (n==0)
        {
            printf("%i\n",0);
            continue;
        }

        f = (m*d)/(m+n);



        if (f == 0)
        {
            printf("%i\n",d);
        }
        else
        {
            printf("%i\n",d-f);
        }
        
        
        

    }
    
    return 0;
}