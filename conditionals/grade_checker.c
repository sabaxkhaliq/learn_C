// Write a program that helps a student check if they passed a test and if they get a bonus reward.
// The user will enter their Math score and Science  and English score (both out of 100).
// The program will first calculate the average score.
// If the average is greater than or equal to 50, the student passes. Otherwise, they fail.
// If the student passes and both scores are above 80, they get a bonus reward.
// Display messages like:
// "You passed!"
// "You failed."
// "You passed and got a bonus reward!"

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int math, science, english, average;

    printf("Enter the Math Marks :: ");
    scanf("%d", &math);
    printf("Enter the Science Marks :: ");
    scanf("%d", &science);
    printf("Enter the English Marks :: ");
    scanf("%d", &english);

    if (math > 100 || math < 0 || science > 100 || science < 0 || english > 100 || english < 0)
    {
        printf("You have given wrong input correct number");
    }
    else
    {
        average = (math + science + english) / 3;
        printf("Average is :: %d\n", average);

        if (average > 80)
        {
            printf("You passed and got a bonus reward!");
        }
        else if (average >= 50)
        {
            printf("You passed!");
        }
        else
        {
            printf("You failed");
        }
    }
}
