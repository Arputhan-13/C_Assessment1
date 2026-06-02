#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the 3digit number :");
    scanf("%d",&a);
    b=2;
    c=(a/10)%10;
    d=(a/100)%10;
    printf("The result : %d%d%d",d,c,b);
    return 0;
}