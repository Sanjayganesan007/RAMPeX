#include<stdio.h>
int isAlpha(char ch){
    return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
}
int main(){
    char str[] = "t$%heory H%andled$#";
    int i = 0, j = 0;
    while (str[j] != '\0'){
        j++;
    }
    j--;
    while (i < j){
        if (!isAlpha(str[i])){
            i++;
        }else if (!isAlpha(str[j])){
            j--;
        }else{
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            i++;
            j--;
        }
    }
    printf("%s", str);
    return 0;
}
