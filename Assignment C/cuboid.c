#include<stdio.h>
int main()
{
    float l,b,h,s,volume;
    printf("Enter the Length&Breadth&Hieght=");
    scanf("%f%f%f",&l,&b,&h);
    s=2*((l*b)+(l*h)+(b*h));
    volume=l*b*h;
    printf("Surface Area is%.2f\n",s);
    printf("Volume is%.2f\n",volume);
    return 0;
}