#include<stdio.h>
int isprime(int n){
    if(n<2){
        return 0;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
}
int main(){
    if(isprime(10)==0){
        printf("THE NUMBER IS NOT A PRIME NUMBER");
    }
    else{
        printf("THE NUMBER IS A PRIME NUMBER");
    }
    return 0;
}