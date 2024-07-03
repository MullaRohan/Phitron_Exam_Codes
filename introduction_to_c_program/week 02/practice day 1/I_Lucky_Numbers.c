#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int m = n / 10;
    int o = n % 10;
    if (m % o == 0 || o % m == 0)
    {
        printf("YES\n");
    }
    else
        printf("NO");
    return 0;
}