#include <stdio.h>

int main()
{
    int choice;
    int number1, number2;
    int Sum, Sub, Product, Divide, Modolus, Square;

    printf("Enter a number :: ");
    scanf("%d", &number1);

    printf("Enter a number :: ");
    scanf("%d", &number2);

    printf("1.Addition \n2.Subtraction \n3.Multiplication \n4.Divide \n5.Modulus \n6.Square\n");
    printf("Enter Your Choice :: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        Sum = number1 + number2;
        printf("Sum of two numbers is :: %d\n", Sum);
    }

    else if (choice == 2)
    {
        Sub = number1 - number2;
        printf("Subtraction of two numbers is :: %d\n", Sub);
    }

    else if (choice == 3)
    {
        Product = number1 * number2;
        printf("Product of two numbers is :: %d\n", Product);
    }

    else if (choice == 4)
    {
        Divide = number1 / number2;
        printf("Division is :: %d\n", Divide);
    }

    else if (choice == 5)
    {
        Modolus = number1 % number2;
        printf("Modolus  is :: %d\n", Modolus);
    }

    else if (choice == 6)
    {
        Square = number1 * number1;
        printf("Square of 1st Number is :: %d\n", Square);
        
    }

    else
    {
        printf("Invalid Choice");
    }
}
