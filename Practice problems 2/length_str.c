#include<stdio.h>
int main(){
    char str[]="I like C";
    int length=0, i=0;
    while(str[i]!='\0'){
        if (str[i]!=' ')
            length++;
        i++;
    }
    printf("%d", length);
    return 0;
}
