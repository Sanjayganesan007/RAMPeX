#include<stdio.h>
int main(){
    int n, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int res[n];
    for(int i = n - 1; i >= 0; i--) {
        res[i] = sum;
        sum += arr[i];
    }
    for(int i = 0; i < n; i++)
        printf("%d ", res[i]);
    return 0;
}
