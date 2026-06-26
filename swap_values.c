//swaps the value of 2 variables

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 5, b = 10, c;

    printf("The Value of a is :: %d\nThe Value of b is :: %d\n", a, b);

    c = b;
    b = a;
    a = c;

    printf("After Swaping \n");
    printf("The Value of a is :: %d\nThe Value of b is :: %d\n", a, b);


    return 0;
}
