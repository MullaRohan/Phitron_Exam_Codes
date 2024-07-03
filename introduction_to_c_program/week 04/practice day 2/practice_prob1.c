#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int my_abs(int n)
{
    int m = abs(n);
    return m;
}
int main()
{
    int n;
    scanf("%d", &n);
    int m = my_abs(n);
    printf("%d", m);
    return 0;
}