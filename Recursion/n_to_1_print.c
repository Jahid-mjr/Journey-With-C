#include<stdio.h>
void n(int i){

    if (i == 0)
    {
        return;
    }
    printf("%i\n",i);
    n(i-1);


}
int main()
{
    n(5);
    return 0;
}