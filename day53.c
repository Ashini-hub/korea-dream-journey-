#include <stdio.h>
int main()
{
    int a[3] = {10, 20, 30};
    int *p = a;

    printf("%d\n", *p);
    p++;
    printf("%d", *p);

    return 0;
}
