#include <stdio.h>
int main()
{
    int a;
    printf("Enter 2digit the number: ");
    scanf("%d", &a);
    printf("The result: %d", a % 10);
    return 0;
}