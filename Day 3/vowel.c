#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
            printf("Vowel\n");
        else
            printf("Consonant\n");
    } else {
        printf("Not an alphabet\n");
    }
    return 0;
}
