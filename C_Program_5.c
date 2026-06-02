#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("The result: %d", a % 8);
    return 0;
}