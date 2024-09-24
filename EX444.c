#include <stdio.h>
void main()
{
    float ms , kmh ;
    printf("entrer la vetese en km/h:");
    scanf("%f",&kmh);
    ms = kmh * 0.27778;
    printf("resultat en m/s: %.2f",ms);
}