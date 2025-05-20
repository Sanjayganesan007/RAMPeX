#include <stdio.h>
int main() {
    int matrix[2][3];
    int i, j, rowSum;
    printf("Enter elements of a 2x3 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < 2; i++) {
        rowSum = 0;
        for (j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }
        printf("Sum of row %d = %d\n", i, rowSum);
    }
    return 0;
}