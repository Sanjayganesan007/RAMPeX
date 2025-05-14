#include <stdio.h>
int main() {
    int a = 10, b = 5, c = 2;
    int result;
    result = a + b * c;      
    printf("a + b * c = %d\n", result);  
    result = (a + b) * c;    
    printf("(a + b) * c = %d\n", result);  
    result = a + b - c * a / b;
    printf("a + b - c * a / b = %d\n", result);  
    return 0;
}
