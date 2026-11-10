#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello";
    char str2[100];
    
    strcpy(str2, str1);
    printf("Copied string: %s", str2);
    return 0;
}
