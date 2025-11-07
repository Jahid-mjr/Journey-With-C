#include<stdio.h>
int dub(int x){

    x=x*2;
    return x;
}
int main()
{
    int a=5;
    printf("%i",dub(a));
    return 0;
}