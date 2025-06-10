#include <stdio.h>
void moveNegatives(int arr[], int n) {
    int temp[n], j = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] < 0)
            temp[j++] = arr[i];
    for (int i = 0; i < n; i++)
        if (arr[i] >= 0)
            temp[j++] = arr[i];
    for (int i = 0; i < n; i++)
        printf("%d ", temp[i]);
}
int main() {
    int arr[] = {-1, 2, -3, 4, 5, -6};
    int n = sizeof(arr)/sizeof(arr[0]);
    moveNegatives(arr, n);
    return 0;
}
