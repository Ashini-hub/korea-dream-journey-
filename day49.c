#include <stdio.h>

float divide(int a, int b)
{
    if(b == 0)
    {
        printf("Cannot divide by zero\n");
        return 0;
    }
    return (float)a / b; // float ah return pannuvom
}

int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    float result = divide(x, y); // with argument, return vaanguthu
    printf("Result = %.2f", result);

    return 0;
}
