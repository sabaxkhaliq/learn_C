#include <stdio.h>

int dec_to_bin(int dec_val)
{

    int arr[25], i = 0;

    if (dec_val == 0 || dec_val == 1)
    {
        printf("%d\n", dec_val);
    }

    while (dec_val > 0)
    {
        arr[i] = dec_val % 2;
        i++;
        dec_val = dec_val / 2;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }
}

// int main()
// {                        // it is because this program linked with oct_to_bin
//     int dec_val;

//     printf("Enter the Decimal Number :");
//     scanf("%d", &dec_val);

//     dec_to_bin(dec_val);
//     return 0;
// }