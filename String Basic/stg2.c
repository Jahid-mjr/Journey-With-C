#include<stdio.h>
int main()
{
    char a[30];
    // gets(a);
    fgets(a,20,stdin); 
    //size bolar somoy null char hisab kora
    //scanf space ba enter pailei thamay
    //gets() enter pailei thamay & enter ney na
    //fgets enter pailei thamay & enter ney !!!!!!!!!!
    printf("%s",a);
    return 0;
}