#include <stdio.h>
int main() {
    int n = 1234, rev = 0;
    while(n > 0){
        rev = rev*10 + n%10;
        n = n/10;
    }
    printf("%d", rev); // Output: 4321
    return 0;
}
