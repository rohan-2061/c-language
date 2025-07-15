#include<stdio.h>

int main()
{
    float am,hm,a,b;
    printf("Enter two no=");
    scanf("%f%f",&a,&b);
    am=(a+b)/2;
    hm=a*b/(a+b);
    printf("Arithmetic mean:%f\n",am);
     printf("Harmonic mean:%f\n",hm);
    return 0;


}