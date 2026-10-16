#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    int largest = -999999, second = -999999;
    for(int i=0; i<n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i]!= largest) {
            second = arr[i];
        }
    }
    printf("Second Largest = %d", second);
    return 0;
}
