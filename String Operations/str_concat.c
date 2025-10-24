#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",a,b);
    int l = strlen(a);

    for (int i = 0; i<=strlen(b) ; i++)
    {
        a[i+l] = b[i];
    }
    
    // strcat(a,b);

    printf("%s %s",a,b);

    return 0;
}