#include <stdio.h>
#include <string.h>
int my_len(char *ch)
{
    int i = 0, count = 0;
    while (ch[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}
int main()
{
    char ch[100];
    scanf("%s", ch);
    int x = my_len(ch);
    printf("%d", x);
    return 0;
}