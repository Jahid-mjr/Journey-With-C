#include<stdio.h>

// void fun(int a[]){

// a[1]=20;

// }


// int main()
// {
//     int a[5] = {12,56,78,96,32};
//     fun(a);
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%i ",a[i]);
//     }


void fun(int a[],int n){

    for (int i = 0; i < n; i++)
    {
        printf("%i ",a[i]);
    }
    


}


int main()
{

    int n;
    scanf("%i",&n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%i",&a[i]);
    }
    

    fun(a,n);




    
    return 0;
}