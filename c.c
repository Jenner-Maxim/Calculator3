#include <stdio.h>

int main()
{

    char op;
    double first, second;
    int state = 1;

    do{
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two operands:\n");
    scanf("%lf %lf", &first, &second);

    switch (op)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        break;
    // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }
    printf("Would you like to continue?\nClick 1 for yes\nClick another number for exiting\n");
    scanf("%d", &state);
    }while(state == 1);
    return 0;
}
