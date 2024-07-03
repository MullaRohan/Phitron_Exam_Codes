#include <stdio.h>
#include <string.h>
int is_palindrome(char *ch)
{
    int i = 0, j = strlen(ch) - 1;
    while (i < j)
    {
        if (ch[i] != ch[j])
        {
            return 1;
        }
        i++;
        j--;
    }
    return 0;
}
int main()
{
    char ch[10001];
    scanf("%s", ch);
    int res = is_palindrome(ch);
    if (res)
        printf("Not Palindrome");
    else
        printf("Palindrome");
    return 0;
}