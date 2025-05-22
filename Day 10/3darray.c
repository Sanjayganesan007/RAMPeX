#include <stdio.h>

int arr3dsum(int mat, int row, int col, int arr[mat][row][col]) {
    int sum = 0;
    for (int i = 0; i < mat; i++) {
        for (int j = 0; j < row; j++) {
            for (int k = 0; k < col; k++) {
                sum += arr[i][j][k];
            }
        }
    }
    return sum;
}

int main() {
    int mat, row, col;
    printf("Enter matrix size (mat): ");
    scanf("%d", &mat);
    printf("Enter row size: ");
    scanf("%d", &row);
    printf("Enter column size: ");
    scanf("%d", &col);

    int arr[mat][row][col];  
    printf("Enter elements into the 3D array:\n");
    for (int i = 0; i < mat; i++) {
        for (int j = 0; j < row; j++) {
            for (int k = 0; k < col; k++) {
                printf("arr[%d][%d][%d]: ", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    int totalsum = arr3dsum(mat, row, col, arr);
    printf("The total sum is: %d\n", totalsum);

    return 0;
}