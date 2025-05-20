#include<stdio.h>
void greet(char*name){
    printf("hello %s",name);
}
int main(){
    char name[20];
    printf("Enter your name:");
    scanf("%s",name);
    greet(name);
    return 0;
}