#include<stdio.h>

void ck_oddeven(int x)
{

    if (x%2==0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
    

}

int main()
{
    int a;
    scanf("%i",&a);
    ck_oddeven(a);
    return 0;
}