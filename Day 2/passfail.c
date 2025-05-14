#include <stdio.h>
int main() {
    int marks[5];
    int i, pass = 1;
    printf("Enter marks for 5 subjects:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        if(marks[i] < 35) {
            pass = 0;
        }
    }
    if(pass) {
        printf("Result: Pass\n");
    } else {
        printf("Result: Fail\n");
    }
    return 0;
}
