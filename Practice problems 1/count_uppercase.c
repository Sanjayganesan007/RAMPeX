#include<stdio.h>
#include<ctype.h>
int main(){
    char str[]="AppLe";
    int count=0;
    for (int i=0;str[i]!='\0';i++){
        if (isupper(str[i]))
            count++;
    }
    printf("%d\n", count);
    return 0;
}
