/* following program input price of box of chocolate and total number of chocolate
 and calculate the price of per chocolate */
 #include<stdio.h>

 int main(int argc, char const *argv[])
 {
    float price_box, total, per_chocolate;

    printf("Enter the Price of Box of Choclate :: ");
    scanf("%f", &price_box);
    printf("Enter the Number of Choclates :: ");
    scanf("%f", &total);

    per_chocolate = price_box / total ;
    printf("Price of Per Chocolate is %f", per_chocolate);



    return 0;
 }
 