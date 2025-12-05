#include<stdio.h>


int main()
{
    int t;

    long long int m,a,b,c,n;


    scanf("%i",&t);
    
    while (t--)
    {
        

        scanf("%lli %lli %lli %lli",&m,&a,&b,&c);


        n = a*b*c;

        if (m != 0 && m % n == 0)
        {
            
            printf("%lli\n", m/n);
        }

        else if (m == 0)
        {
            printf("%i\n",0);
        }
        

        else
        {
            printf("%i\n",-1);
        }
        
        




    }
    
    return 0;
}