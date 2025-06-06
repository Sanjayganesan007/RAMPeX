#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n], res[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    res[0] = arr[0] * arr[1];
    for(int i = 1; i < n - 1; i++)
        res[i] = arr[i - 1] * arr[i + 1];
    res[n - 1] = arr[n - 2] * arr[n - 1];
    for(int i = 0; i < n; i++)
        printf("%d ", res[i]);
    return 0;
}
