#include<stdio.h>
int main()
{
    int ch;
    float redius,area,circumference,vol;
    printf("Enter the choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("Enter the Area\n:");
    scanf("%f",&redius);
        area=3.14*(redius*redius);
        printf("\nArea of Circle\n:%f ",area);
        break;
        case 2:
        printf("Enter the circumference\n:");
    scanf("%f",&redius);
        circumference=2*3.14*redius;
        printf("\ncircumference:%f ",circumference);
        break;
        case 3:
         printf("Enter the Volume\n:");
    scanf("%f",&redius);
        vol=(4.0/3.0)*3.14*redius*redius*redius;
        printf("Volume of sphere=%f",vol);
        break;
        default:
        printf("\nInvalid Area");
    }
    return 0;
}