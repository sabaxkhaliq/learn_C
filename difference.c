#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;

    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    printf("Enter 3rd number : ");
    scanf("%d", &c);


    int difference;
    int larger;
    int smaller;

    if (a > b && a > c)
    {
        // printf("a is larger");
        larger = a;
    }
    else if (b > a && b > c)
    {
        // printf("b is larger");
        larger = b;
    }
    else
    {
        // printf("c is larger");
        larger = c;
    }

    if (a < b && a < c)
    {
        // printf("a is smaller");
        smaller = a;
    }

    else if (b < a && b < c)
    {
        // printf("b is smaller");
        smaller = b;
    }

    else
    {
        // printf("c is smaller");
        smaller = c;
    }

    difference = larger - smaller;

    printf("Difference Between larger and Smaller Number is :: %d", difference);
}
