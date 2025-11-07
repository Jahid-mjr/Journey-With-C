#include<stdio.h>
int sum(int a, int b){

    return a+b;

}
int sub(int a, int b){

    return a-b;
}
int main()
{
    int a = 10;
    int b = 5;
    printf("%i %i",sum(a,b),sub(a,b));
    return 0;
}