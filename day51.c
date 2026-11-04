#include <stdio.h>

int main()
{
    int a[2][2] = {{10, 20}, {30, 40}};
    int i, j;

    printf("Array elements are:\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
