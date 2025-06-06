#include <stdio.h>
int reverse(int n) {
    int rev = 0;
    while(n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}
int main() {
    int num, rev, sqr1, sqr2;
    scanf("%d", &num);
    sqr1 = num * num;
    rev = reverse(num);
    sqr2 = reverse(rev * rev);

    if(sqr1 == sqr2)
        printf("Adam Number\n");
    else
        printf("Not an Adam Number\n");
    return 0;
}
