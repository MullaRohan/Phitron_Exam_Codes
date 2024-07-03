// Question was given on doc file by typing

#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 0)
        printf("zero\n");
    else if (n > 0)
        printf("postive\n");
    else
        printf("negative\n");
    return 0;
}