#include <stdio.h>
int main() {
    double num, square, cube;
    printf("Enter a number: ");
    scanf("%lf", &num);
    square = num * num;
    cube = num * num * num;
    printf("Square of %.2lf = %.2lf\n", num, square);
    printf("Cube of %.2lf = %.2lf\n", num, cube);
    return 0;
}
