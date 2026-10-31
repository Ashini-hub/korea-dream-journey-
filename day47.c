#include <stdio.h>

int multi(int a, int b)
{
    return a * b;
}

int main()
{
    int x, y;
    printf("Enter the numbers: ");
    scanf("%d %d", &x, &y);

    int result = multi(x, y); // with argument
    printf("Result = %d", result);

    return 0;
}
