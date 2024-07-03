#include <stdio.h>
#include <string.h>
char capital_to_small(char ch)
{
    char x = ch + 32;
    return x;
}
int main()
{
    char ch;
    scanf("%c", &ch);
    char x = capital_to_small(ch);
    printf("%c", x);
    return 0;
}