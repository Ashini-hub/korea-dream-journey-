#include <stdio.h>
void divide(int a, int b);  // int illa, void
void main()
{
    int x, y;
    printf("Enter the numbers: ");
    scanf("%d %d", &x, &y);
    divide(x, y);
}
void divide(int a, int b)  // int illa, void
{
    printf("Result = %d", a / b);
}
