#include <stdio.h>
void multiply(int a, int b)
{
    int result = a * b;
    printf("Result = %d", result);
}

int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    multiply(x, y); 

    return 0;
}
