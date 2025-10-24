#include<stdio.h>
int main()
{
    int x;
    int sum = 0;
    scanf("%i",&x);
    int a[x];

    for (int i = 0; i < x; i++)
    {
        scanf("%i",&a[i]);
        sum = sum + a[i];
    }
   printf("The sum is %i",sum);
  
    return 0;
}