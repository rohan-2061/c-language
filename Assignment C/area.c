#include<stdio.h>
int main()
{
    float redius,area,circumference;
    printf("Enter The Redius of Circle :");
    scanf("%f",&redius);
     area=3.14*redius*redius;
     circumference=2*3.14*redius;
     printf("Area of Circle %f\n",area);
     printf("circumference of Circle %f\n",circumference);
     return 0;
     
}