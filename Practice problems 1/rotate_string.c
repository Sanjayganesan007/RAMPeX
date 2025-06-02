#include<stdio.h>
#include<string.h>
int main(){
    char str[100]="apple";
    int n=7;
    int len=strlen(str);
    n=n%len;
    for (int i=0;i<n;i++){
        char first=str[0];
        for (int j=0;j<len-1;j++){
            str[j]=str[j+1];
        }
        str[len-1]=first;
    }
    printf("%s\n", str);
    return 0;
}
