#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the 2 digit number :");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    printf("The Result : %d%d",b,c);
    return 0;
}