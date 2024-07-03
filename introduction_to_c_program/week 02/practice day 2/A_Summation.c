#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + ar[i];
    }
    if (sum > 0)
        printf("%lld", sum);
    else
        printf("%lld", sum * -1);
    return 0;
}