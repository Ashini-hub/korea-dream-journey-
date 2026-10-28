#include <stdio.h>
void multi();
void main()
{
    multi();
}
void multi()
{
    int x, y;
    printf("Enter the numbers: ");
    scanf("%d %d", &x, &y);
    printf("Result = %d", x * y);
}
