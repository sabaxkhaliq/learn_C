#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int arr[5] = {1, 2, 3, 4, 5};
    int x;
    int idex = -1;

    printf("Enter the Number :: ");
    scanf("%d", &x);

    bool flag = false;

    for (int i = 0; i <= 4; i++)
    {
        if (arr[i] == x)
        {
            flag = true;
            idex = i;
            // printf("%d is the number and %d is the index", x, arr[i]);
            break;
        }
    }
    if (flag == false)
    {
        printf("%d is not present in the array\n ", x);
    }
    else
    {
        printf("%d is present in the array and its index is %d\n ", x, idex);
    }

    return 0;
}
