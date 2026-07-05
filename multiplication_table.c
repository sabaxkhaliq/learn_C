#include <stdio.h>

    int table(int x)
    {
        int a = x;
        int b;

        for (int i = 1; i <= 10; i++)
        {
            b = a * i;
            printf("%d x %d = %d\n  ",a, i, b);
        }
    }

 int main(int argc, char const *argv[])
 {
    int a;

    printf("Enter the Number :: ");
    scanf("%d", &a);

    table(a);



    return 0;
 }
 