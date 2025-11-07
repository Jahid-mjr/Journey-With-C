#include<stdio.h>
int main()
{
    int a;
    // printf("Write a number :");
    scanf("%i",&a);

    if (a%2 == 0)
    {
        printf("This number %i is even.\n",a);
    }
    else
    {
        printf("This number %i is Odd\n",a);
    }
    
    


return 0;    
}