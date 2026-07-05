#include<stdio.h>

int main(int argc, char const *argv[])
{
    int roll;
    float percentage;
    char grade;

    printf("Enter Your Roll no :: ");
    scanf("%d", &roll);
    printf("Enter Your Percentage :: ");
    scanf("%f", &percentage);
    printf("Enter Your Grade :: ");
    scanf(" %c", &grade);

    printf("\nRoll No :: \t %d\nPercentage :: \t %f\nGrade :: \t %c\n", roll, percentage, grade);


    return 0;
}
