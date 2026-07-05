#include <stdio.h>

int main()
{
    int units, unit_price, bill;
    char user_type;

    printf("Enter h for Home user and c for Commrical user ::");
    scanf("%c", &user_type);

    printf("Enter the Number of Units Consumed ::");
    scanf("%d", &units);

    if (units <= 200)
    {
        if (user_type == 'h')
        {
            unit_price = 12;
        }
    }

    else if (user_type == 'c')
    {
        unit_price = 15;
    }

    else if (units > 200 && units <= 400)
    {
        if (user_type == 'h')
        {
            unit_price = 15;
        }
    }

    else if (user_type == 'c')
    {
        unit_price = 20;
    }

    else if (user_type == 'h')
    {
        unit_price = 15;
    }

    else if (user_type == 'c')
    {
        unit_price = 24;
    }

    bill = units * unit_price;
    printf("Your electricity bill is :: %d\n", bill);
}
