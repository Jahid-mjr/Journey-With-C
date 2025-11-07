#include<stdio.h>
int main()
{
    int a;
    long long int sum = 0;
    scanf("%i",&a);
    for ( int i = 1; i <=a ; i++)
    {
        sum = sum + i;
    
    }
    
    printf("The sum is %lli",sum);


    return 0;
}