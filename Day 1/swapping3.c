#include <stdio.h>
int main() {
    int a = 5, b = 8, c = 12, temp;
    printf("Before swapping: a = %d, b = %d, c = %d\n", a, b, c);
    temp = a;
    a = b;
    b = c;
    c = temp;
    printf("After swapping: a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}
