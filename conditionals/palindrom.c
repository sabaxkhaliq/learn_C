#include <stdio.h>

int palindrome(int a)
{
    int number = a;
    int number_2 = 0;

    if (a < 0)
    {
        return 0; // Negative Number;
    }

    while (a > 0)
    {
        int digit = a % 10;
        number_2 = number_2 * 10 + digit;
        a = a / 10;
    }

    if (number == number_2)
    {
        return 1; //  palindrome;
    }
    else
    {
        return 0; // No palindrome;
    }
}

int main(int argc, char const *argv[])
{
    int a;

    printf("Enter the Number :: ");
    scanf("%d", &a);

    if (palindrome(a))

    {
        printf("%d is a palindrome\n", a);
    }
    else
    {
        printf("%d is not a palindrome\n", a);
    }

    return 0;
}
