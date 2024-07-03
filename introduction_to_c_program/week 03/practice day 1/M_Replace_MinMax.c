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
    int min = INT_MAX, min_ind;
    int max = INT_MIN, max_ind;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
            min_ind = i;
        }
        if (ar[i] > max)
        {
            max = ar[i];
            max_ind = i;
        }
    }
    int temp = ar[min_ind];
    ar[min_ind] = ar[max_ind];
    ar[max_ind] = temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}