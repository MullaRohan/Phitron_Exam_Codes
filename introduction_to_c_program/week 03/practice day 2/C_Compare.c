#include <stdio.h>
#include <string.h>
int main()
{
    char ch[21], dh[21];
    scanf("%s %s", ch, dh);
    int x = strcmp(ch, dh);
    if (x > 0)
        printf("%s", dh);
    else
        printf("%s", ch);
    return 0;
}