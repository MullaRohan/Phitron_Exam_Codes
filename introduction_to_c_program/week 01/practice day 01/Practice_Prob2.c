// Question was given in doc link by typing
#include <stdio.h>
#include <string.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    float c = a * 1.0 / b;
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %.2f\n", a, b, c);
    return 0;
}