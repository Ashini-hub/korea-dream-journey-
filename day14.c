#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enna lines venum? ");
    scanf("%d", &n);

    // Triangle pattern
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
