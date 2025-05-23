#include <stdio.h>
int main() {
    int a = 5;
    int *p = &a;
    printf("Address of a: %p\n", &a);
    printf("Value of p: %p\n", p);
    printf("Value pointed to by p: %d\n", *p);
    return 0;
}
