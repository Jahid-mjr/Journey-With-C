#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    int r =0;
    scanf("%s",a);
    scanf("%s",b);

    // int i = 0;
    // while (1)
    // {
    //     if (a[i]=='\0' && b[i]=='\0')
    //     {
    //        printf("Equal.\n");
    //        break;
    //     }
    //     else if (a[i]=='\0')
    //     {
    //         printf("A is smaller.\n");
    //         break;
    //     }
    //     else if (b[i]=='\0')
    //     {
    //         printf("B is smaller.\n");
    //         break;
    //     }  
    //     else if (a[i]<b[i])
    //     {
    //         printf("A is smaller.\n");
    //         break;
    //     }
    //     else if (a[i]>b[i])
    //     {
    //         printf("B is smaller.\n");
    //         break;
    //     }
    //     else if (a[i]==b[i])
    //     {
    //         i++;
    //     }
        
            
        
        
    // }


    

    int d = strcmp(a,b);
    if (d<0)
    {
        printf("A is smaller.\n");
    }
    else if (d>0)
    {
        printf("B is smaller.\n");
    }
    else
    {
        printf("Equal.\n");
    }
    
    
    












    // for (int i = 0; i < strlen(a); i++)
    // {
    //     if (a[i]==b[i])
    //     {
    //         continue;
    //     }
    //     else if (a[i] > b[i])
    //     {
    //         printf("String a is boro\n");
    //         r = 1;
    //         break;
            
    //     }
    //     else
    //     {
    //         printf("String b is boro\n");
    //         r = 1;
    //         break;
            
    //     }
 
        
        
    // }


    // if (r==0)
    // {
    //     printf("Duitai somon\n");
    // }
    
    
    
    return 0;
}