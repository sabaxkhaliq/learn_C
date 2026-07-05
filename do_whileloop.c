#include <stdio.h>

int main()
{
    int a;

    do
    {
       printf("Enter a number :: ");
       scanf("%d", &a);
       
        printf("%d\n", a);
        a++;

    } while (a <= 10);

    printf ("The value of a is %d", a);

}