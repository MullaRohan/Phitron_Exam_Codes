#include <stdio.h>
#include <string.h>
char ch[10000001];
int main()
{
    scanf("%s", ch);
    int cnt[26];
    for (int i = 'a'; i <= 'z'; i++)
    {
        int count = 0;
        for (int j = 0; j < strlen(ch); j++)
        {
            if (i == ch[j])
            {
                count++;
            }
        }
        if (count > 0)
        {
            printf("%c : %d\n", i, count);
        }
    }
    return 0;
}