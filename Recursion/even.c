#include<stdio.h>

void n(int i, int j){

    if ( i == j+1)
    {
        return;
    }
    if (i%2 == 0)
    {
        printf("%i\n",i);
    }
    n(i+1,j);
    
    



}
int main()
{
    n(10,12);
    return 0;
}