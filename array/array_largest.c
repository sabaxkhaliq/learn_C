#include <stdio.h>

int main()
{
    int arr[3];
    int b, c, d;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter a number :: ");
        scanf("%d", &arr[i]);

        b = arr[0], c = arr[1], d = arr[2];
    }

    if (b > c && b > d)
    {
        printf("1st is Larger");
    }
    else if (c > d && c > b)
    {
        printf("2nd is larger");
    }
    else
        printf("3rd is larger");

    return 0;
}
