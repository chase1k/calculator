#include <stdio.h>

int main(){

    char operator;
    double x,y;
    printf("Enter an function (+ - * /): ");
    scanf("%c",&operator);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &x, &y);

    switch(operator){
        case '+':
            printf("%.1lf + %.1lf = %.1lf", x,y, x+y);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", x,y, x-y);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", x,y, x*y);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf", x,y, x/y);
            break;
        default:
            printf("Error: Bad Operand");

    }
}