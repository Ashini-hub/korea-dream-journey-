#include <stdio.h>
void divide(int a, int b);
void main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    divide(x, y);
}
void divide(int a, int b)
{
    if(b == 0)
        printf("Cannot divide by zero");
    else
        printf("Result = %d", a / b);
}
