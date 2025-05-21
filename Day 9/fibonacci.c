#include <stdio.h>
void printFibonacci(int n) {
    int a = 0, b = 1, next, i;
    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return;
    }
    printf("Fibonacci Series up to %d terms:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}
int main() {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    printFibonacci(terms);
    return 0;
}