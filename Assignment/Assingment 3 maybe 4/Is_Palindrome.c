#include<stdio.h>
#include<string.h>

int is_palindrome(char a[],int n){

    int flag = 1;

    for (int i = 0, j = n-1; i < j; i++,j--)
    {
        if (a[i] != a[j])
        {
            flag = 0;
            break;
        }

        
    }
    
    return flag;



}

int main()
{
    char a[1003];
    scanf("%s",a);

    int x = is_palindrome(a,strlen(a));

    if (x == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    
    


    return 0;
}