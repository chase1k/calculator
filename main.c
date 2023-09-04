#include <stdio.h>

void adaptiveCalculator(){

}

void simpleCalculator(){

    char operator;
    double x,y;
    printf("Enter an function (+ - * /): ");
    scanf(" %c",&operator);
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

    return;
}

int main(){

    int calctype;
    printf("1. Simple Calculator\n2. Adaptive Calculator\nChoice: ");
    scanf("%i",&calctype);

    if (calctype == 1){
        simpleCalculator();
    } else if (calctype == 2){
        adaptiveCalculator();
    } else{
        printf("Error: Bad option\n");
    }
    
    return 0;
}
