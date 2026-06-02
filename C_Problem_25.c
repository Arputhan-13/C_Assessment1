#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, i, j, k;
    printf("Enter the 3 digit Number :");
    scanf("%d",&a);
    b=a%10;
    c=(a/10)%10;
    d=(a/100)%10;
    e=b+c+d;
    f=e%10;
    g=(e/10)%10;
    h=f+g;
    i=h%10;
    j=(h/10)%10;
    k=(h)*(e<10)+((e>10)*(i+j));
    printf("The Result : %d",k);
    return 0;
}