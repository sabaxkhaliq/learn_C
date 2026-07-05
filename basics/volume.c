#include <stdio.h>

int main()
{
    int choice;
    float volume;
    printf ("Find Volume\n");

    printf ("1.Cube\n2.Cylinder \n3.Sphere \nEnter your choice ::");
    scanf("%d", &choice);

    if (choice == 1)
    {
        float length;
        printf(" Enter Length ::\n");
        scanf("%f", &length);
        volume = length * length * length;
        printf ("Volume is :: %f\n", volume);

    }
    else if (choice == 2)
    {
        float length_1, radius_1;
        printf ("Enter Length :: ");
        scanf("%f", &length_1);

        printf ("Enter Radius :: ");
        scanf ("%f", &radius_1);

        volume = 3.142 * radius_1 * radius_1 * length_1;
        printf ("Volume is :: %f\n", volume);
    }
    else if (choice == 3)
    {
        float radius;
        printf ("Enter Radius :: ");
        scanf ("%f", &radius);
        
        volume = 3.142 * radius * radius * radius;
        printf ("Volume is :: %f\n", volume);        
    }
    else
        printf ("Invalid Choice\n");

}

