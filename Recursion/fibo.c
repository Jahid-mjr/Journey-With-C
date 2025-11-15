#include<stdio.h>

int fibo(int i){


    if (i == 1)
    {
        return 0;
    }
    if (i == 2)
    {
        return 1;
    }
      
    return fibo(i-1) + fibo(i-2);


}
int main()
{
    printf("%i",fibo(45));
    return 0;
}