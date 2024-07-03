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
    int two = 0, three = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] % 2 == 0 && ar[i] % 3 == 0)
        {
            two++;
        }
        else if (ar[i] % 2 == 0)
        {
            two++;
        }
        else if (ar[i] % 3 == 0)
        {
            three++;
        }
    }
    printf("%d %d", two, three);
    return 0;
}