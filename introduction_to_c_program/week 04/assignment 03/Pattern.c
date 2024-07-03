#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1, space = n - 1;
    for (int i = 1; i < n * 2; i++)
    {
        for (int j = space; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        if (i < n)
        {
            space--;
            star += 2;
        }
        else
        {
            space++;
            star -= 2;
        }
        printf("\n");
    }
    return 0;
}