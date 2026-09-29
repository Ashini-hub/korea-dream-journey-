#include <stdio.h>
int main() {
    int a[] = {16, 17, 4, 3, 5, 2};
    int n = 6;
    int max = a[n-1];
    int i;

    printf("Leaders = %d ", max);

    for(i = n-2; i >= 0; i--) {
        if(a[i] > max) {
            max = a[i];
            printf("%d ", max);
        }
    }
    return 0;
}
