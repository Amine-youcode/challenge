#include <stdio.h>
void main()
{
    int a;
    int b;
    char op;
    printf("entrer number A: ");
    scanf("%i",&a);
    
    printf("enter operator: ");
    scanf("%s",&op);
    
    printf("entrer numbre B:");
    scanf("%i",&b);
    
    if (op == '+')
    {
        printf("A+B= %i \n",a+b);
    }
    else if(op == '-')
    {
        printf("A-B= %i \n",a-b);
    }
    else if (op == '*')
    {
        printf("A*B= %i \n",a*b);
    }
    else if (op == '/')
    {
        printf("A/B= %i \n",a/b);
    }
    
    
    
}