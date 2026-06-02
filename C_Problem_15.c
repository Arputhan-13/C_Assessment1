#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, i;
    printf("Enter 4digit the number: ");
    scanf("%d", &a);
    b=a%10;
    c=a/10;
    e=c%10;
    d=a/100;
    h=d%10;
    g=a/1000;
    i=g%10;
    printf("The result: %d%d%d%d",i,h,b,e);
    return 0;
}