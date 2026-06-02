#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the 3digit number :");
    scanf("%d",&a);
    b=a%10;
    c=(a/100)%10;
    d=a-5*((b)%2)*((c)%2);
     printf(" The result : %d",d);
    return 0;
}    
    