#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the 3digit number :");
    scanf("%d",&a);
    b=a%10;
    c=(a/10)%10;
    d=a-5*((b+d)%2);
     printf(" The result : %d",d);
    return 0;
}    
    