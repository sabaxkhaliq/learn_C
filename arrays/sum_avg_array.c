#include <stdio.h>

int sum(int x, int y)
{
    int sum;

    sum = x + y;
    // average = (x + y)/2;

    return sum;
}

int main()
{
    int arr[20];
    int result_sum, n;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter a Number :: ");
        scanf("%d", &arr[i]);
    }

    result_sum = sum(arr, n);
    average = (float)sum / n;
    // result_average = average(arr[0], arr[1]);

    printf("%d\n", result_sum);
    printf("%f\n", average);
}