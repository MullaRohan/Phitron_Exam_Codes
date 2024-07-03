#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    int ar[3], jr[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &ar[i]);
        jr[i] = ar[i];
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (ar[i] > ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", ar[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", jr[i]);
    }
    return 0;
}