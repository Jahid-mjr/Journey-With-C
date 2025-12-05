#include<stdio.h>
int main()
{
    int t,n,k,q;
    scanf("%i",&t);

    while (t--)
    {
       scanf("%i",&n);

       int a[n];
       int b[n];
       int c[n];

       for (int i = 0; i < n; i++)
       {
         scanf("%i",&a[i]);
       }

       for (int i = 0; i < n; i++)
       {
        
        b[i] = a[i];

       }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++)
            if (b[j] < b[i]) {
                k = b[i];
                b[i] = b[j];
                b[j] = k;
            }
    }


    for (int i = 0; i < n; i++)
    {

        q = a[i] - b[i];

        if (q < 0)
        {
            c[i] = (-1)*q;
        }
        else
        {
            c[i] = q;
        }
        
        



    }
    

    for (int i = 0; i < n; i++)
       {
         printf("%i ",c[i]);
       }
       printf("\n");



       



    }
    



    return 0;
}