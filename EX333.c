#include <stdio.h>
void main()
{
    float yards , km ;
    printf("entrer la distance en km: ");
    scanf("%f",&km);
    yards = km * 1093.61;
    printf("resultat en yards: %.2f",yards);
}