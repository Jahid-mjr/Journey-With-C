#include<stdio.h>

int count_before_one(int a[], int b){

    int count = 0;

    for (int i = 0; i < b; i++)
    {
        if (a[i] == 1)
        {
            break;
        }
        else
        {
            count++;
        }
        
        
        
    }
    
    return count;



}


int main()
{
    int n;
    scanf("%i",&n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%i",&a[i]);
    }

    printf("%i",count_before_one(a,n));


    
    return 0;
}