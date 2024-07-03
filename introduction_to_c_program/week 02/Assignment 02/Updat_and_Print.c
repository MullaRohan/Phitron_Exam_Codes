#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int index, value;
    scanf("%d %d", &index, &value);
    ar[index] = value;
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}