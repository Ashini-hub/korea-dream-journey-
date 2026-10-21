#include <stdio.h>

int main() {
    float x, y, dxdy;
    
    printf("x value: ");
    scanf("%f", &x);
    printf("y value: ");
    scanf("%f", &y);
    
    if(x != 0) {
        dxdy = y / x;
        printf("dx/dy = %.2f\n", dxdy);
    }
    else {
        printf("x=0 na dx/dy infinite da!\n");
    }
    
    return 0;
}
