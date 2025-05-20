#include<stdio.h>
int factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int num=5;
    int result= factorial(num);
    printf("The factorial of %d is %d",num,result);
    return 0;
}