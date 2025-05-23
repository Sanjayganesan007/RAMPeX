#include <stdio.h>
int add(int *x, int *y) {
    return *x + *y;
}
int main() {
    int a = 10, b = 5;
    int sum = add(&a, &b); 
    printf("Sum = %d\n", sum);
    return 0;
}