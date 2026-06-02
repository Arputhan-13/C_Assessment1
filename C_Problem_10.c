#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter 3digit the number: ");
    scanf("%d", &a);
    b=a/10;
    printf("The result: %d", b % 10);
    return 0;
}