#include <stdio.h>
#include <string.h>
int main()
{
    char ch[1001], dh[1001];
    scanf("%s", ch);
    strcpy(dh, ch);
    int i = 0, j = strlen(ch) - 1;
    while (i < j)
    {
        char temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;
        i++;
        j--;
    }
    int x = strcmp(ch, dh);
    if (x == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}