#include <stdio.h>

int main()
{
    int number1;
    int number2;

    int sum, sub, product, divide, modulus;

    printf("Enter a number :: ");
    scanf("%d", &number1);

    printf("Enter a number :: ");
    scanf("%d", &number2);

    sum = number1 + number2;
    sub = number1 - number2;
    product = number1 * number2;
    divide = number1 / number2;
    modulus = number1 % number2;

    printf("\n");

    printf("Sum of number1 and number2 is :: %d\n", sum);
    printf("Subtraction of number1 and number2 is :: %d\n", sub);
    printf("Product of number1 and number2 is :: %d\n", product);
    printf("Divide of number1 and number2 is :: %d\n", divide);
    printf("Modulus of number1 and number2 is :: %d\n", modulus);
}
