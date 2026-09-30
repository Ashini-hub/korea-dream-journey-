#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_from_right = arr[n-1];
    printf("Leaders: %d ", max_from_right);

    // Right la irunthu left varom
    for(int i=n-2;
