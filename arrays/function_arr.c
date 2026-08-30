#include <stdio.h>

void fun(int x[])
{
    int temp = x[0];
    x[0] = x[1];
    x[1] = temp;
    return;
}
int main(int argc, char const *argv[])
{
    int arr[2] = {2, 9};
    printf("Before Swapping :: %d\n  %d\n", arr[0], arr[1]);

    fun(arr);
    printf("After Swaping :: %d\n %d\n", arr[0], arr[1]);
    return 0;
}
