#include <stdio.h>

int main() {
    float turbidity;
    printf("Enter turbidity value: ");
    scanf("%f", &turbidity);

    if(turbidity > 5) {
        printf("Water is not clear - Need treatment\n");
    } else {
        printf("Water is clear - Good to drink\n");
    }
    return 0;
}
