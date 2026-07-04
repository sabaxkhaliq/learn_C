#include <stdio.h>

int main()
{
    int fact;
    printf("Enter Any Number :: ");
    scanf("%d", &fact);

    for (int i = 1; i < fact; i++)
    {
        fact = fact * i;
        printf("%d\n", fact);
    }
}
