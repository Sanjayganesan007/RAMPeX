#include <stdio.h>
int main() {
    int n, i, arr[100], odd = 0, even = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Odd = %d\nEven = %d\n", odd, even);
    return 0;
}
