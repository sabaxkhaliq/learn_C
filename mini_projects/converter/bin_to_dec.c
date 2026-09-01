#include<stdio.h>
// binary value convert into decimal value

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
int dec_to_dec(int bin_val)
{
    int reminder;
     int exponent = 0, dec_val = 0;

    while (bin_val > 0)
    {
        reminder = bin_val % 10; 
        bin_val = bin_val / 10;
        dec_val += reminder * power(2, exponent);  
        exponent++;
    }

    printf("%d" , dec_val);
}

int main(int argc, char const *argv[])
{
    int bin_val;

    printf("Enter the Binary Value :: ");
    scanf("%d", &bin_val);     // give binary val

    bin_to_dec(bin_val);

    
    return 0;
}
