#include <stdio.h>
void main()
{
    float C ;
    printf("entla température: ");
    scanf("%f",&C);
    if (C < 0)
    {
        printf("la temperature:solide");
    }
    else if(0 <= C < 100)
    {
        printf("la temperature:Liquide");

    }
    else if(C >= 100);
    {
        printf("la temperature:Gaz");
    }
    
}