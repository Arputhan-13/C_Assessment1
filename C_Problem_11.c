#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the 2 digit Number :");
    scanf("%d",&a);
    b=a%10;
    c=(a/10)%10;
    printf("The Result : %d",b+c);
    return 0;
}