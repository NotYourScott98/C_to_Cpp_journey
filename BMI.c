#include <stdio.h>
#include <math.h>

int main() {
    float kg, ht, ht2, BMI;

    printf("Enter the weight in kilograms: ");
    scanf("%f", &kg);

    printf("Enter the height in metres: ");
    scanf("%f", &ht);

    // Calculating BMI
    ht2 = pow(ht, 2);
    BMI = kg / ht2;

    // Classification Logic
    if (BMI < 15.0) {
        printf("Starvation\n");
    } 
    else if (BMI <= 17.5) {
        printf("Anorexic\n");
    } 
    else if (BMI <= 18.5) {
        printf("Underweight\n");
    } 
    else if (BMI <= 24.9) {
        printf("Ideal\n");
    } 
    else if (BMI <= 29.9) {
        printf("Overweight\n");
    } 
    else if (BMI <= 39.9) {
        printf("Obese\n");
    } 
    else {
        printf("Morbidly obese\n");
    }

    return 0;
}
