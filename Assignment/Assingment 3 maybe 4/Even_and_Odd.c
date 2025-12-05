#include<stdio.h>

void odd_even(){

    int n,e = 0, o = 0;
    scanf("%i",&n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
       scanf("%i",&a[i]);
    }


    for (int i = 0; i < n; i++)
    {
        if (a[i]%2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
        
        
    }

    printf("%i %i",e,o);
    
    


}

int main()
{
    odd_even();
    return 0;
}