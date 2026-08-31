#include <stdio.h>


void reverse(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int arr[5] = {2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);


    reverse(arr, 5);

    return 0;
}
