#include <stdio.h>

void fibonacci(int n)
{
    int a = 0,  b = 1,  c;

    for (int i = 0; i < n; i++)
    {

        switch (i)
        {
        case 0:
            printf("%d\n", a);

            break;

        case 1:
            printf("%d\n", b);

            break;
        default:
            c = a + b;
            printf("%d\n", c);

            a = b;
            b = c;

            break;
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;

    printf("Enter the Number :: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
