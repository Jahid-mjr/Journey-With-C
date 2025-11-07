#include <stdio.h>

int main() {
    int i;
    long int li;
    long long int lli;
    float f;
    double d;
    char c;


    printf("Enter an integer: ");
    scanf("%d", &i);

    printf("Enter a long integer: ");
    scanf("%ld", &li);

    printf("Enter a long long integer: ");
    scanf("%lld", &lli);

    printf("Enter a float: ");
    scanf("%f", &f);

    printf("Enter a double: ");
    scanf("%lf", &d);
  

    printf("Enter a character: ");
    scanf("%c", &c);


    printf("\n----- OUTPUT -----\n");
    printf("Integer: %d\n", i);
    printf("Long Integer: %ld\n", li);
    printf("Long Long Integer: %lld\n", lli);
    printf("Float: %.2f\n", f);
    printf("Double: %.4lf\n", d);
    printf("Character: %c\n", c);

    return 0;
}
