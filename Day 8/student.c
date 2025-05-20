#include <stdio.h>
int main() {
    int marks[3][3];
    int i, j, total;
    for (i = 0; i < 3; i++) {
        printf("Enter marks for Student %d:\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf(" Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    printf("\nTotal Marks:\n");
    for (i = 0; i < 3; i++) {
        total = 0;
        for (j = 0; j < 3; j++) {
            total += marks[i][j];
        }
        printf("Student %d: %d\n", i + 1, total);
    }
    return 0;
}