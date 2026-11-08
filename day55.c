#include <stdio.h>

int main()
{
    int mark;

    printf("Enter the mark: ");
    scanf("%d", &mark);

    if (mark >= 90 && mark <= 100)
    {
        printf("Grade A");
    }
    else if (mark >= 80 && mark < 90)
    {
        printf("Grade B");
    }
    else if (mark >= 70 && mark < 80)
    {
        printf("Grade C");
    }
    else if (mark >= 60 && mark < 70)
    {
        printf("Grade D");
    }
    else if (mark >= 50 && mark < 60)
    {
        printf("Grade E");
    }
    else if (mark >= 0 && mark < 50)
    {
        printf("Fail");
    }
    else
    {
        printf("Invalid Mark");
    }

    return 0;
}
