#include <stdio.h>
#include <string.h>
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        char ch[10000];
        int small = 0, capital = 0, digit = 0;
        scanf("%s", ch);
        for (int i = 0; i < strlen(ch); i++)
        {
            if (ch[i] >= 'a' && ch[i] <= 'z')
            {
                small++;
            }
            else if (ch[i] >= 'A' && ch[i] <= 'Z')
            {
                capital++;
            }
            else
            {
                digit++;
            }
        }
        printf("%d %d %d\n", capital, small, digit);
    }
    return 0;
}