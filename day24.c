#include <stdio.h>

int main() {
    float size;
    
    printf("Enter nanoparticle size in nm: ");
    scanf("%f", &size);
    
    if (size >= 1 && size <= 100) {
        if (size <= 40) {
            printf("%.2f nm is valid - Best for diagnostics (Red color)\n", size);
        } else {
            printf("%.2f nm is valid - Best for therapeutics\n", size);
        }
    } else {
        printf("%.2f nm is INVALID - Not a nanoparticle\n", size);
    }
    
    return 0;
}
