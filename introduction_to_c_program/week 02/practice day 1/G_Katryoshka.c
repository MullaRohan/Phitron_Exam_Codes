#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    long long int a[3], count = 0;
    // a[0] eye
    // a[1] head
    // a[2] body
    scanf("%lld %lld %lld", &a[0], &a[1], &a[2]);
    long long int min = a[0];
    if (a[1] < min)
        min = a[1];
    if (a[2] < min)
        min = a[2];
    count = min;
    a[0] = a[0] - min;
    a[1] = a[1] - min;
    a[2] = a[2] - min;
    if (a[0] != 0 && a[2] != 0)
    {
        if (a[2] >= a[0] / 2)
        {
            count = count + (a[0] / 2);
        }
        else
        {
            count = count + a[2];
        }
    }
    printf("%lld", count);
    return 0;
}