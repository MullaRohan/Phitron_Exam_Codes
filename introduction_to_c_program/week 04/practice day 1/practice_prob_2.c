#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = (n * 2) - 1, space = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = star; j > 0; j--)
        {
            printf("*");
        }
        space++;
        star -= 2;
        printf("\n");
    }
    return 0;
}