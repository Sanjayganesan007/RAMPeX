#include <stdio.h>
int main() {
    int n, i, arr[100], sum = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        printf("%d ", sum);
        sum += arr[i];
    }
    return 0;
}
