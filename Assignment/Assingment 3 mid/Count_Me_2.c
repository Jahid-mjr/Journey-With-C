#include<stdio.h>
int main()
{
    char a[100000];
    int c = 0;
    scanf("%s",a);

    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            
        }
        else
        {
            c++;
        }
        
        
    }
    printf("%i",c);
    
    return 0;
}