#include <stdio.h>

int factorial()
{
    int fact;
    scanf("%d", &fact);
    int size = fact;
    for (int i = 1; i < size; i++)
    {
        fact = fact * i;
        // printf("%d\n", factorial);
    }
    return fact;
}

int main()
{
   

    int answer = factorial();
    printf("%d\n", answer);

    return 0;
}
