#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides: ");
    scanf("%f %f %f", &a, &b, &c);

    // 1. If all 3 sides are equal
    if (a == b && b == c) {
        printf("It is an equilateral triangle.\n");
    }
    
    // 2. If any 2 sides are equal
    else if (a == b || b == c || a == c) {
        printf("It is an isosceles triangle.\n");
    }
    
    // 3. If no sides are equal
    else {
        printf("It is a scalene triangle.\n");
    }

    return 0;
}
