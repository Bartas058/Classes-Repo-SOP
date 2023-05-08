#include <stdio.h>

int main()
{
        double number1;
        double number2;
        double result;
        char operator;

        printf("Enter the first number: ");
        scanf("%lf", &number1);

        printf("Specify the operator (+, -, *, /): ");
        scanf(" %c", &operator);

        printf("Enter the second number: ");
        scanf("%lf", &number2);

        if (operator == '+')
        {
                result = number1 + number2;
                printf("%.2lf %c %.2lf = %.2lf\n", number1, operator, number2, result);
        }
        else if (operator == '-')
        {
                result = number1 - number2;
                printf("%.2lf %c %.2lf = %.2lf\n", number1, operator, number2, result);
        }
        else if (operator == '*')
        {
                result = number1 * number2;
                printf("%.2lf %c %.2lf = %.2lf\n", number1, operator, number2, result);
        }
        else if (operator == '/' && number2 != 0)
        {
                result = number1 / number2;
                printf("%.2lf %c %.2lf = %.2lf\n", number1, operator, number2, result);
        }
        else if (operator == '/' && number2 == 0)
        {
                printf("You cannot divide by zero.\n");
        }
        else
        {
                printf("Incorrect.\n");
                return 1;
        }

        return 0;
}