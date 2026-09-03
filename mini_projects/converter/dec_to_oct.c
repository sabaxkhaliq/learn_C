#include <stdio.h>

void dec_to_oct(int dec_val)
{

    int arr[15], i = 0;

    if (dec_val == 0 || dec_val == 1)
    {
        printf("%d\n", dec_val);
        
    }

    while (dec_val > 0)
    {
        arr[i] = dec_val % 8; // 1, 0  
        i++;
        dec_val = dec_val / 8; // 3, 
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }
}

int main(int argc, char const *argv[])
{
    int dec_val;

    printf("Enter the Decimal value :: ");
    scanf("%d", &dec_val);

    dec_to_oct(dec_val);

    return 0;
}
