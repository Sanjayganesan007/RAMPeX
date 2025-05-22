#include <stdio.h>
int countDigits(int num) {
    if (num == 0) {
        return 0;
    }
    return 1 + countDigits(num / 10);
}
int main() {
    int number, result;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number == 0) {
        result = 1;
    } else {
        result = countDigits(number);
    }
    printf("Number of digits in %d is: %d\n", number, result);
    return 0;
}
