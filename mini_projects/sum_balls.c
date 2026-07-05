// Total Number of Balls in Jar A and Jar B
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, sum = 0;
    printf("Number of Balls in Jar A :: ");
    scanf("%d", &a);
    printf("Number of Balls in Jar B :: ");
    scanf("%d", &b);

    sum = a + b;
    printf("Total Number of Balls :: %d", sum);
    

    return 0;
}
