#include <stdio.h>

void multi()
{
    int x, y;
    printf("Enter the numbers: ");
    scanf("%d %d", &x, &y);
    printf("Result = %d", x * y);
}

int main()
{
    multi(); // function call - no argument
    return 0;
}
