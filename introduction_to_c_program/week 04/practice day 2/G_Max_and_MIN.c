#include <stdio.h>
#include <string.h>
#include <limits.h>
void min_max()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] < min)
            min = ar[i];
        if (ar[i] > max)
            max = ar[i];
    }
    printf("%d %d", min, max);
}
int main()
{
    min_max();
    return 0;
}