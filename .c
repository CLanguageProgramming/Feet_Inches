#include <stdio.h>

struct height
{
    int feet;
    float inches;
}h1, h2;

int main()
{
    printf("Enter Feet and Inches Separately\n");
    printf("Set 1\n");
    printf("Enter Feet\n>>");
    scanf("%d", &h1.feet);
    printf("Enter Inches\n>>");
    scanf("%f", &h1.inches);
    printf("\n");
    printf("\n");
    printf("Set 2\n");
    printf("Enter Feet\n>>");
    scanf("%d", &h2.feet);
    printf("Enter Inches\n>>");
    scanf("%f", &h2.inches);
    printf("\n");
    printf("\n");
    int feetf = h1.feet + h2.feet;
    float inchesf = h1.inches + h2.inches;
    if(inchesf>12)
    {
        feetf++;
        inchesf = inchesf-12;
    }
    
    printf("\nSum of distances = %d\'-%.1f\"", feetf, inchesf);
}
