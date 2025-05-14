#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch (1) {  
        case 1: 
            if (num % 5 == 0 && num % 11 == 0) {
                printf("The number is divisible by both 5 and 11.\n");
            } else {
                printf("The number is NOT divisible by both 5 and 11.\n");
            }
            break;
        default:
            printf("Invalid case.\n");
    }
    return 0;
}

