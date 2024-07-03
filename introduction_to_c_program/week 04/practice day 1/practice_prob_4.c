#include <stdio.h>
#include <string.h>
char small_to_capital(char n)
{
    char ch = n - 32;
    return ch;
}
int main()
{
    char ch;
    scanf("%c", &ch);
    char x = small_to_capital(ch);
    printf("%c", x);
    return 0;
}