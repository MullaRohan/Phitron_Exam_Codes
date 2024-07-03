#include <stdio.h>
#include <string.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if (n - m >= 0)
    {
        printf("%d", n - m);
    }
    else
        printf("0");
    return 0;
}