#include <stdio.h>
void productArray(int arr[], int n) {
    int left[n], right[n], prod[n];
    left[0] = 1;
    right[n - 1] = 1;
    for (int i = 1; i < n; i++)
        left[i] = arr[i - 1] * left[i - 1];
    for (int i = n - 2; i >= 0; i--)
        right[i] = arr[i + 1] * right[i + 1];
    for (int i = 0; i < n; i++)
        prod[i] = left[i] * right[i];
    for (int i = 0; i < n; i++)
        printf("%d ", prod[i]);
}
int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    productArray(arr, n);
    return 0;
}
