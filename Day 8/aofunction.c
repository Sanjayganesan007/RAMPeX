#include<stdio.h>
int add(int x, int y){
    return x+y;
}
int sub(int x, int y){
    return x-y;
}
int mul(int x, int y){
    return x*y;
}
int division(int x, int y){
    return x/y;
}
int main(){
    printf("%d\n",add(4,7));
    printf("%d\n",sub(4,7));
    printf("%d\n",mul(4,7));
    printf("%d\n",division(4,7));
    return 0;
}