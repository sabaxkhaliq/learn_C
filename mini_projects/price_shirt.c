#include <stdio.h>

int main(int argc, char const *argv[])
{
    float original, discount, price = 0 ; 

    printf("Enter the Original price of shirt :: ");
    scanf("%f", &original);

    printf("Enter the Discount price of shirt :: ");
    scanf("%f", &discount);

    price = original - discount;
    printf("Your Total Price after Discount is :: %f", price);



    return 0;
}
