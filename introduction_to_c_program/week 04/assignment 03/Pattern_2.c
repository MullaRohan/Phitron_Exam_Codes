#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1;
    int nm = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = space; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = nm; j >= 1; j--)
        {
            printf("%d", j);
        }
        space--;
        nm++;
        printf("\n");
    }
    return 0;
}