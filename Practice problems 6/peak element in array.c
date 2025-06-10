#include <stdio.h>
int findPeak(int arr[], int n) {
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            return arr[i];
    }
    if (n == 1 || arr[0] > arr[1])
        return arr[0];
    if (arr[n - 1] > arr[n - 2])
        return arr[n - 1];
    return -1;
}
int main() {
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int peak = findPeak(arr, n);
    printf("Peak element is %d", peak);
    return 0;
}
