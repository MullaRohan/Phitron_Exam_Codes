#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = star - 1; j >= 0; j--)
        {
            printf("*");
        }
        star--;
        printf("\n");
    }
    return 0;
}