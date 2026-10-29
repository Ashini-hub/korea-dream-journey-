#include <stdio.h>
void multi(int a, int b);
void main()
{
    int x, y;
    printf("Enter the numbers: ");
    scanf("%d %d", &x, &y);
    multi(x, y);
}
void multi(int a, int b)
{
    printf("Result = %d", a * b);
}
