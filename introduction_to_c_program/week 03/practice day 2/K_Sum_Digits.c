#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char ch[n];
    int sum = 0;
    scanf("%s", ch);
    for (int i = 0; i < n; i++)
    {
        sum = sum + (ch[i] - '0');
    }
    printf("%d", sum);
    return 0;
}