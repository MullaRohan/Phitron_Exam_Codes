#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int min = INT_MAX, index = 0;
    for (int i = 0; i < n; i++)
    {
        if (min > ar[i])
        {
            min = ar[i];
            index = i;
        }
    }
    printf("%d %d", min, index + 1);
    return 0;
}