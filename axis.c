#include <stdio.h>

int main() {
    int x, y;
    
    printf("Enter the value of x and y: ");
    scanf("%d, %d", &x, &y);
    
    if (x > 0 && y > 0) {
        printf("Point lies on the 1st quadrant.\n");
    } 
    else if (x < 0 && y > 0) {
        printf("Point lies on the 2nd quadrant.\n");
    } 
    else if (x < 0 && y < 0) {
        printf("Point lies on the 3rd quadrant.\n");
    } 
    else if (x > 0 && y < 0) {
        printf("Point lies on the 4th quadrant.\n");
    } 
    else if (x == 0 && y == 0) {
        printf("It lies on the center (origin).\n");
    } 
    else if (x == 0) {
        printf("Point lies on the Y-axis.\n");
    } 
    else {
        printf("Point lies on the X-axis.\n");
    }
    
    return 0;
}
