#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100000];
    scanf("%s", ch);
    int count = 0;
    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u')
            continue;
        else
            count++;
    }
    printf("%d", count);
    return 0;
}