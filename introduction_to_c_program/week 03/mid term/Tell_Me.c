#include <stdio.h>
#include <string.h>
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n;
        scanf("%d", &n);
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }
        int m = 0, count = 0;
        scanf("%d", &m);
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == m)
            {
                count++;
                break;
            }
        }
        if (count)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}