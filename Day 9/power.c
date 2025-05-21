#include <stdio.h>
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
int main() {
    int base = 3;
    int exponent = 9;
    int result;
    result = power(base, exponent);
    printf("3^9 = %d\n", result);
    return 0;
}