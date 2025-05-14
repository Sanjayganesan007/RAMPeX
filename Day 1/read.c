#include <stdio.h>
int main() {
    int age;
    float salary;
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); 
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your salary: ");
    scanf("%f", &salary);
    printf("\nYour name is: %s", name);
    printf("Your age is: %d\n", age);
    printf("Your salary is: %.2f\n", salary);
    return 0;
}
