#include <stdio.h>
int main() {
    int marks[5], total = 0;
    float average;
    printf("Enter marks for 5 subjects:\n");
    for(int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    average = total / 5.0;
    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", average);
    return 0;
}

