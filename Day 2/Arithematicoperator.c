#include <stdio.h>
int main() {
    int a=10, b=5, sum,subtract,mul,division,mod;
    sum=a+b;
    subtract=a-b;
    mul=a*b;
    division=a/b;
    mod=a%b;
    printf("sum: %d\n",sum);
    printf("subtract: %d\n",subtract);
    printf("mul: %d\n",mul);
    printf("division: %d\n",division);
    printf("mod: %d\n",mod);
    return 0;
}