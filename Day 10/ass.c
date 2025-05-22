#include <stdio.h>
int perfect(int n){
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return sum;
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int num=perfect(n);
    if(num==n){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}