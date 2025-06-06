#include <stdio.h>
int main() {
    int n, x, count = 1;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int majority = arr[n / 2];
    for(int i = 0; i < n; i++) {
        if(arr[i] == majority)
            count++;
    }
    if(count > n / 2)
        printf("The majority element is : %d\n", majority);
    else
        printf("No majority element\n");
    return 0;
}
