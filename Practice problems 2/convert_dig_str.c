#include<stdio.h>
int main(){
    char str[]="1Hi234Hello";
    int i=0,sum=0;
    while(str[i]!='\0'){
        if(str[i]>='0'&&str[i]<='9'){
            sum+=str[i]-'0';
        }
        i++;
    }
    printf("%d", sum);
    return 0;
}
