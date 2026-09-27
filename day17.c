#include <stdio.h>

int main() {
    int n, original, reversed = 0, remainder;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    original = n;
    
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    if (original == reversed)
        printf("%d is a Palindrome\n", original);
    else
        printf("%d is not a Palindrome\n", original);
        
    return 0;
}
