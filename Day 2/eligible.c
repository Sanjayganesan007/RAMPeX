#include <stdio.h>
int main() {
    int age;
    char has_license, has_voter_id;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Do you have a driving license? (y/n): ");
    scanf(" %c", &has_license);
    printf("Do you have a voter ID? (y/n): ");
    scanf(" %c", &has_voter_id);
    if (age >= 18 && (has_license == 'y' || has_license == 'Y')) {
        printf("You are eligible to drive.\n");
    } else {
        printf("You are not eligible to drive.\n");
    }
    if (age >= 18 && (has_voter_id == 'y' || has_voter_id == 'Y')) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }
    return 0;
}