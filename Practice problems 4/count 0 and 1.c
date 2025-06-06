#include <stdio.h>
int main() {
    int n, zc = 0, oc = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] == 0)
            zc++;
        else if(arr[i] == 1)
            oc++;
    }
    printf("zc = %d\n", zc);
    printf("oc = %d\n", oc);
    return 0;
}
