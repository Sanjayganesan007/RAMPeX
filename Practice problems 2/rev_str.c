#include<stdio.h>
int main(){
    char str[]="apple";
    int i=0, len=0;
    while(str[len]!='\0'){
        len++;
    }
    for (i=len-1;i>=0;i--){
        printf("%c", str[i]);
    }
    return 0;
}
