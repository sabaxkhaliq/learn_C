#include <stdio.h>
#include <math.h>

int Check(int a)
{

    if (a < 2)
    {
        // 0 means not prime;
        return 0;
    }

    int limit = (int)sqrt(a);

    for (int i = 2; i <= limit; i++)
    {
        if (a % i == 0)
        {
            return 0; 
        }
    }

    return 1; 
}
void main()
{
    int a;

    printf("Enter the Number :: ");
    scanf("%d", &a);



    if (Check(a)) //calling function
    {
        printf("%d is a prime number.\n",a);
    }
    else
    {
        printf("%d is not a prime number.\n",a);
    }

}