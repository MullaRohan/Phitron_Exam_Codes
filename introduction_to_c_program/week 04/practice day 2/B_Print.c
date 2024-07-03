#include <stdio.h>
#include <string.h>
void print()
{
    int n;
    scanf("%d", &n);
    // print 1st digit for ignore space on last
    printf("1");
    for (int i = 2; i <= n; i++)
    {
        printf(" %d", i);
    }
}
int main()
{
    print();
    return 0;
}