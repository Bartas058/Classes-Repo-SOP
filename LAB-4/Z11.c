#include <stdio.h>

int main()
{
    int n;
    float number;
    float total = 0.0;

    printf("How many numbers do you want to add up? ");
    scanf("%d", &n);

    for (int i = 1; i <= n ; i++)
    {
        printf("Enter the number %d: ", i);
        scanf("%f", &number);
        total += number;
    }

    printf("The sum of the given number is: %f\n", total);

    return 0;
}