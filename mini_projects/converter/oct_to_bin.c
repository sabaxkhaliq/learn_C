#include <stdio.h>
#include "dec_to_bin.c"

int power(int base, int exponent)
{
    int power = 1;

    if (exponent == 0)
    {

        return power;
    }

    for (int i = 1; i <= exponent; i++)
    {
        power = power * base;
    }
    return power;
}

int oct_to_dec(int oct)
{
    int oct_val = oct, reminder = 0;
    int exponent = 0, dec_val = 0;

    while (oct_val > 0)
    {
        reminder = oct_val % 10;
        oct_val = oct_val / 10;
        dec_val += reminder * power(8, exponent);
        exponent++;
    }
    // printf("%d\n", dec_val);
    return dec_val;
}



int main()
{
    int oct, dec_val ;

    printf("Enter the Octal Number :");
    scanf("%d", &oct);

    dec_val = oct_to_dec(oct);
    dec_to_bin(dec_val);
    return 0;
}
