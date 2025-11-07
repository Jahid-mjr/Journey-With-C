#include<stdio.h>
int main()
{
    int a;
    scanf("%i",&a);

    if (a==0)
    {
        printf("This is zero.");
    }
    else if (a>0)
    {
        printf("This is a positive number.");
    }
    else
    {
        printf("This is a negative number.");
    }
    



    return 0;
}