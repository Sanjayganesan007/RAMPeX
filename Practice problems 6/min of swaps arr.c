#include <stdio.h>
void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}
int minSwaps(int arr[], int n) {
    int visited[n], ans = 0;
    for (int i = 0; i < n; i++)
        visited[i] = 0;
    int pos[n];
    for (int i = 0; i < n; i++)
        pos[i] = i;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[i]) {
                swap(&arr[j], &arr[i]);
                swap(&pos[j], &pos[i]);
            }
    for (int i = 0; i < n; i++)
        visited[i] = 0;
    for (int i = 0; i < n; i++) {
        if (visited[i] || pos[i] == i)
            continue;
        int cycle = 0, j = i;
        while (!visited[j]) {
            visited[j] = 1;
            j = pos[j];
            cycle++;
        }
        if (cycle > 0)
            ans += cycle - 1;
    }
    return ans;
}
int main() {
    int arr[] = {4, 3, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Minimum swaps = %d", minSwaps(arr, n));
    return 0;
}
