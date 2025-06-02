#include<stdio.h>
int main(){
    char ch='p';
    char str[]="apple";
    int found=0;
    for (int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            found=1;
            break;
        }
    }
    printf("%s\n", found ? "Present":"Not Present");
    return 0;
}
