#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Enter the 4 digit Number :");
    scanf("%d",&a);
    b=a%10;
    c=(a/10)%10;
    d=(a/100)%10;
    e=(a/1000)%10;
    printf("The Result : %d%d%d%d",d,e,c,b);
    return 0;
}