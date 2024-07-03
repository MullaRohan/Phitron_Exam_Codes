#include <stdio.h>
#include <string.h>
int main()
{
    char ch[11], dh[11], eh[22];
    scanf("%s %s", ch, dh);
    printf("%d %d\n", strlen(ch), strlen(dh));
    strcpy(eh, ch);
    printf("%s\n", strcat(eh, dh));
    char temp = ch[0];
    ch[0] = dh[0];
    dh[0] = temp;
    printf("%s %s", ch, dh);
    return 0;
}