#include <stdio.h>
int main()
{

    int x;
    scanf("%i", &x);

    if (x >= 5000)
    {
        printf("Cox e jabo.\n");

        if (x >= 10000)
        {
            printf("Sent martine jabo.\n");
        }
        else
        {
            printf("Sent martine jabo na,\n");
        }
    }
    else
    {
        printf("Kothaw jabo na.\n");
    }

    return 0;
}