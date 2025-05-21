#include <stdio.h>
float CelsiusFahrenheit(float celsius){
     return (celsius*9/5)+32;
}
int main() {
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    printf("%.2f Celsius is %.2f Fahrenheit\n", celsius,CelsiusFahrenheit(celsius));
    return 0;
}