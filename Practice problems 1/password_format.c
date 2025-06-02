#include <stdio.h>
#include <string.h>
int main(){
    char str[]="HelloWorld";
    printf("Input: %s\n", str);
    printf("Output: ");
    for (int i=0;i<strlen(str); i++) {
        printf("*");
    }
    printf("\n");
    return 0;
}
