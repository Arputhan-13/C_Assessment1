#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Enter 3digit the number: ");
    scanf("%d", &a);
    b=a%10;
    c=a/10;
    e=c%10;
    d=a/100;
    printf("The result: %d", b + e + d);
    return 0;
}