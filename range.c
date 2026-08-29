#include <stdio.h>

int main() {
    int total_numbers;
    int i = 2; // Counter starts at 2 because the 1st number is read outside the loop
    float num, min, max, range;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &total_numbers);

    // Safety check in case user enters 0 or negative numbers
    if (total_numbers <= 0) {
        printf("Invalid count. Exiting program.\n");
        return 0;
    }

    // Read the very first number to initialize min and max
    printf("Enter number 1: ");
    scanf("%f", &num);
    min = num;
    max = num;

    // Basic while loop to process the rest of the numbers
    while (i <= total_numbers) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);

        // Update maximum if current number is larger
        if (num > max) {
            max = num;
        }
        // Update minimum if current number is smaller
        if (num < min) {
            min = num;
        }

        i++; // Move to the next number
    }

    // Calculate the range
    range = max - min;

    // Display outputs
    printf("\nBiggest number: %.2f", max);
    printf("\nSmallest number: %.2f", min);
    printf("\nRange of the set (%.2f - %.2f): %.2f\n", max, min, range);

    return 0;
}
