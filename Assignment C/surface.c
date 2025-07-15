#include<stdio.h>
int main()
{
    float s,r,h,volume;
    printf("Enter the Radius & height");
    scanf("%f%f",&r,&h);
    s=2*3.14*r*r+2*3.14*r*h;
    volume=3.14*r*r*h;
    printf("Surface Area of %f\n",s);
     printf("Volume of =%f\n",volume);
    return 0;

}