#include <stdio.h>

char operation;
double n1, n2;

int main()
{
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operation);

    printf("Enter two operands: ");
    scanf("%lf %lf", &n1, &n2);

    switch(operation)
    {
        case '+':
            printf("%.2lf\n", n1 + n2);
            break;

        case '-':
            printf("%.2lf\n", n1 - n2);
            break;

        case '*':
            printf("%.2lf\n", n1 * n2);
            break;

        case '/':
            if(n2 != 0)
                printf("%.2lf\n", n1 / n2);
            else
                printf("Error! Division by zero.\n");
            break;

        default:
            printf("Error! Invalid operator.\n");
    }

    return 0;
}