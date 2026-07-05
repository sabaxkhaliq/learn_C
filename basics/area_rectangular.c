#include <stdio.h>

int main()
{
    int length;
    int width;
    int Area;

    printf("Enter the Length :: ");
    scanf("%d", &length);

    printf("Enter the Width :: ");
    scanf("%d", &width);

    Area = length * width;

    printf("Area of Rectangular is %d\n", Area);
}
