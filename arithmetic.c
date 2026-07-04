#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a ,b;

    printf("Enter 1st Number :: ");
    scanf("%d", &a);
    printf("Enter 2nd Number :: ");
    scanf("%d", &b);

    char ch;
    printf("Enter any Arithmetic Operator :: ");
    scanf(" %c", &ch);

    switch (ch)
    {
    case '+':
        printf("%d\n", a + b);
        break;
    case '-':
        printf("%d\n", a - b);
        break;
    case '*':
        printf("%d\n", a * b);
        break;
    case '/':
        printf("%f\n", (float)a / b);
        break;
    case '%':
        printf("%d\n", a % b);
        break;

    default:
        printf("Invalid Operator");
        break;
    }

    return 0;
}
