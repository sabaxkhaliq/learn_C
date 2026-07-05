#include <stdio.h>

int main()
{
    int a, b, c;

    int larger;
    int middle;
    int smaller;

    printf("Enter 1st number ::");
    scanf("%d", &a);
    printf("Enter 2nd  number ::");
    scanf("%d", &b);
    printf("Enter 3rd number ::");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        larger = a;
    }
    else if (b > a && b > c)
    {
        larger = b;
    }
    else
    {
        larger = c;
    }

    if (a < b && a < c)
    {
        smaller = a;
    }
    else if (b < a && b < c)
    {
        smaller = b;
    }
    else
    {
        smaller = c;
    }

    if ((a > b && a < c) || (a < b && a > c))
    {

        middle = a;
    }
    else if ((b > a && b < c) || (b < a && b > c))
    {
        middle = b;
    }
    else
    {
        middle = c;
    }

    printf("Larger Number is %d\n", larger);
    printf("Middle Number is %d\n", middle);
    printf("Smaller Number is %d\n", smaller);
    
    
}
