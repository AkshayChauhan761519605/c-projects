#include <stdio.h>

int main() {
    float x, y;
    char p;
    printf("Enter first number: ");
    scanf("%f", &x);
    printf("Enter operator (+,-,*,/): ");
    scanf(" %c", &p);
    printf("Enter second number: ");
    scanf("%f", &y);

    if(p=='+') printf("Result = %.2f\n", x+y);
    else if(p=='-') printf("Result = %.2f\n", x-y);
    else if(p=='*') printf("Result = %.2f\n", x*y);
    else if(p=='/') {
        if(y!=0) printf("Result = %.2f\n", x/y);
        else printf("Division by zero not allowed\n");
    } else printf("Invalid operator\n");
    return 0;
}
