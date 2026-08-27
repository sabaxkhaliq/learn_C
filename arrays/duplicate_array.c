#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5] = {2, 4, 6, 8, 4};

    for (int i = 0; i <= 4; i++) // compare 1 element in the array
    {
        for (int j = i + 1; j <= 4; j++) // compare all element in the array
        {
            if (arr[i] == arr[j])
            {
                printf("%d is the duplicate element in the array", arr[i]);
                break;
            }
        }
    }

    return 0;
}
