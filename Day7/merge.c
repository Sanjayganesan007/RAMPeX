#include <stdio.h>
int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int size1 = 3, size2 = 3;
    int arr3[100];
    int i;
    for (i = 0; i < size1; i++) {
        arr3[i] = arr1[i];
    }
    for (int j = 0; j < size2; j++) {
        arr3[i] = arr2[j];
        i++;
    }
    int size3 = size1 + size2;
    for (int k = 0; k < size3; k++) {
        printf("%d ", arr3[k]);
    }
    return 0;
}