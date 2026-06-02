#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the 3digit number :");
    scanf("%d",&a);
    b=a-5*(a%2);
    printf(" The result : %d",b);
    return 0;
}    