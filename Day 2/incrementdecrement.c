#include <stdio.h>
int main() {
    int a = 5, b, c;
    b = ++a;
    printf("After pre-increment: a = %d, b = %d\n", a, b);
    c = a++;
    printf("After post-increment: a = %d, c = %d\n", a, c);
    b = --a;
    printf("After pre-decrement: a = %d, b = %d\n", a, b);
    c = a--;
    printf("After post-decrement: a = %d, c = %d\n", a, c);
    return 0;
}