#include <stdio.h>

int main() {
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second = -1;

    // Find largest
    for(i=1; i<n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Find second largest
    for(i=0; i<n; i++) {
        if(arr[i]!= largest) {
            if(second == -1 || arr[i] > second) {
                second = arr[i];
            }
        }
    }

    if(second == -1) {
        printf("No second largest element\n");
    } else {
        printf("Second largest is: %d\n", second);
    }

    return 0;
}
