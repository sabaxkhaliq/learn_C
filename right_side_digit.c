#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num, digit ; 

    printf("Enter a Number :: ");
    scanf("%d", &num);
    digit = num % 10; 
    printf("The Right side digit is :: %d\n ", digit);
    

    return 0;
}
