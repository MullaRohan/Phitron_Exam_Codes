#include <stdio.h>
#include <string.h>
int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int count[x + 1];
    for (int i = 0; i <= x; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > 0 && ar[i] <= x)
            count[ar[i]]++;
    }
    for (int i = 1; i <= x; i++)
    {
        printf("%d\n", count[i]);
    }
    return 0;
}