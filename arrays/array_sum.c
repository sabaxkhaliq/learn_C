#include <stdio.h>

void array_sum()
{
    int a[5];
    int b[5];
    int c[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number for Array 01 :: ");
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number for Array 02 :: ");
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];
        printf("%d\n", c[i]);
    }
}

int main()
{
    array_sum();
}
