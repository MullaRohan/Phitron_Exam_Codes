// g.conversion

#include <stdio.h>
#include <limits.h>
#include <string.h>

int main()
{
    char ch[100001], ah[100001];
    scanf("%s", ch);
    int st = strlen(ch);
    for (int i = 0; i < st; i++)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            ah[i] = ch[i] - 32;
        }
        else if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            ah[i] = ch[i] + 32;
        }
        if (ch[i] == ',')
        {
            ah[i] = ' ';
        }
    }
    // for (int i = 0; i < st; i++)
    // {
    //     printf("%c", ah[i]);
    // }
    printf("%s", ah);

    return 0;
}