#include<stdio.h>
int main(){
    char str[] = "Replace all Vowels";
    int i=0; 
    while(str[i]!='\0'){
        char ch = str[i];
        if (ch=='a' ||ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' ||ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            str[i]=' ';
        }
        i++;
    }
    printf("%s", str);
    return 0;
}
