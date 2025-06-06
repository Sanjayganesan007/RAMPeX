#include <stdio.h>
int main() {
    int num, digit, count = 0;
    scanf("%d %d", &num, &digit);
    while(num > 0) {
        if(num % 10 == digit)
            count++;
        num /= 10;
    }
    printf("%d\n", count);
    return 0;
}
