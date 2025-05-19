#include <stdio.h>
int main() {
    int arr[50]={76,34,4,6,2},value=7;
    int n=4,pos=3;
  for(int i=0;i>pos;i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos]=value;
    n++; 
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}