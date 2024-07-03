#include <stdio.h>
#include <string.h>
void odd_even()
{
    int n, odd = 0, even = 0;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if (ar[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d", even, odd);
}
int main()
{
    odd_even();
    return 0;
}