#include <stdio.h>

int sub(int x, int y)
{
    int result;
    result = x - y;

    return result;
}

int main()
{
    int a, b, c;

    scanf("%d%d", &a, &b);
    c = sub(a, b);

    printf("Result is %d\n", c);
}
