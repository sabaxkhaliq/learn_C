#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, product = 0;
    printf("Enter the Number :: ");
    scanf("%d", &a);
    printf("Enter the Number :: ");
    scanf("%d", &b);

    product = a * b;
    printf("Product of Numbers is :: %d", product);
    

    return 0;
}
