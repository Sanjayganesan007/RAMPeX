#include <stdio.h>
void findDivisors(int num) {
    int sum = 0, count = 0;
    printf("Divisors of %d are: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
            sum += i; 
            count++;   
        }
    }
    printf("\nTotal number of divisors: %d\n", count);
    printf("Sum of divisors: %d\n", sum);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    findDivisors(num);
    return 0;
}
