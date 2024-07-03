#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int fst_man, add_man, day_in;
        scanf("%d %d %d", &fst_man, &add_man, &day_in);
        int res = (fst_man * day_in) / (fst_man + add_man);
        printf("%d\n", day_in - res);
    }
    return 0;
}