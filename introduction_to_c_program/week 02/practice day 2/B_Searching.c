#include <stdio.h>
#include <string.h>
int main()
{
    int n, fnd;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    scanf("%d", &fnd);
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == fnd)
        {
            index = i;
            break;
        }
    }
    printf("%d", index);
    return 0;
}