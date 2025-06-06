#include <stdio.h>
int main() {
    int n, total = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    for(int i = 0; i < n; i++)
        printf("%d ", total - arr[i]);
    return 0;
}
