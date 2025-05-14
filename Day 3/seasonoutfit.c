#include <stdio.h>
int main() {
    float temp;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temp);
    if (temp < 10)
        printf("Wear a jacket.\n");
    else if (temp >= 10 && temp < 20)
        printf("Wear a sweater.\n");
    else
        printf("Wear a T-shirt.\n");
    return 0;
}
