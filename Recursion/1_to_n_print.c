#include<stdio.h>

void n(int i){

    if (i == 6)
    {
        return;
    }
    
    printf("%i\n",i);
    n(i+1);


}

int main()
{
    int i = 1;
    n(1);
    return 0;
}