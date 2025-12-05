#include<stdio.h>

int main()
{
    char a[10000];
    scanf("%s",a);
    char b[] = "abcdefghijklmnopqrstuvwxyz";
    int c[30];
    
    for (int i = 0; b[i] != '\0'; i++)
    {
        c[i] = 0;
        for (int j = 0; a[j] != '\0'; j++)
        {
            if (b[i] == a[j])
            {
                c[i] = c[i] + 1;
            }
            
        }
        
    }

    for (int i = 0; b[i] != '\0'; i++)
    {
        if (c[i] != 0)
        {
            printf("%c - %i\n",b[i],c[i]);
        }
        
    }




    return 0;
}