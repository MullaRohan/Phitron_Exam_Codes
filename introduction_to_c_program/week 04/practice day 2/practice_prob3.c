#include <stdio.h>
#include <string.h>
int count_odd(int *ar, int n)
{
    int od = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] % 2 != 0)
        {
            od++;
        }
    }
    return od;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int x = count_odd(ar, n);
    printf("%d", x);
    return 0;
}