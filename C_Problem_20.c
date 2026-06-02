#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the number :");
    scanf("%d",&a);
    b=a%10;
    c=0;
    d=(a/100)%10;
    printf("The result : %d%d%d",d,c,b);
    return 0;
    
}