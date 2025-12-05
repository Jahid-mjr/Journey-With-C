#include<stdio.h>
int main()
{
    int n,c, s, m;
    char b[10000];
    scanf("%i", &n);
    while (n--)
    {
        scanf("%s",b);
        c = 0, s = 0, m = 0;
        for (int i = 0; b[i] != '\0' ; i++)
        {
            if (b[i] >= 'a' && b[i] <= 'z')
            {
                s++;
            }
            else if (b[i] >= 'A' && b[i] <= 'Z')
            {
                c++;
            }
            else if (b[i] >= '0' && b[i] <= '9')
            {
                m++;
            }
            
            
            
        }


        printf("%i %i %i\n",c,s,m);
        
    }
    
    return 0;
}