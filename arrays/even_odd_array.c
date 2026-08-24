#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5];
    int a, even = 0, odd = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the Number :: ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("%d even elements\n %d odd elements \n", even, odd);

    return 0;
}
