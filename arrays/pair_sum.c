#include <stdio.h>

int main()
{
    int arr[5];
    int b[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number :: ");
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < 5; i++)
    {
        b[i] = arr[i] + arr[i - 1];
        printf("%d\n", b[i]);
    }

    return 0;
}
