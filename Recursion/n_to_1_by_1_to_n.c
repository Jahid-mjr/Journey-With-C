#include<stdio.h>

void n(int i){

    if (i == 6)
    {
        return;
    }
    n(i+1);
    printf("%i\n",i);
    



}
int main()
{
    n(1);
    return 0;
}