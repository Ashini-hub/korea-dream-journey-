#include <stdio.h>
int main() {
    int mark;
    printf("Enter mark: ");
    scanf("%d", &mark);
    if(mark >= 50)
        printf("Pass - Quiz completed");
    else
        printf("Fail");
    return 0;
}
