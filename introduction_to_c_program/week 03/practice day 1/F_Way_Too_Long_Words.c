#include <stdio.h>
#include <string.h>
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        char ch[101];
        scanf("%s", ch);
        int st = strlen(ch);
        if (st > 10)
            printf("%c%d%c\n", ch[0], st - 2, ch[st - 1]);
        else
            printf("%s\n", ch);
    }
    return 0;
}