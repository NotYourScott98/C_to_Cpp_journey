#include <stdio.h>

int main() {
    int pos = 0, neg = 0, zer = 0;
    float p;
    char dec;

    printf("Enter decision (y/n): ");
    scanf(" %c", &dec); // Added a space before %c to clear any leftover whitespace

    while (dec == 'y' || dec == 'Y') {
        printf("Enter number: ");
        scanf("%f", &p);

        if (p == 0) {
            printf("zero\n");
            zer++;
        } 
        else if (p < 0) {
            printf("negative\n");
            neg++;
        } 
        else {
            printf("positive\n");
            pos++;
        }

        
    }

    printf("\nTotal positive numbers is %d, negative numbers is %d and zeros is %d\n", pos, neg, zer);

    return 0;
}
