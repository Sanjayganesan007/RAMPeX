#include<stdio.h>
int great(int a,int b,int c){
    if(a>=b&&a>=b){
        return a;
    }
    else if(b>=c&&b>=a){
        return b;
    }
    else {
        return c;
    }
}
int main(){
    int a=3;
    int b=8;
    int c=7;
    int greatest = great(a,b,c);
    printf("%d is a greatest number",greatest);
    return 0;
}