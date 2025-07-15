#include<stdio.h>
int main()
{
    float f,k,c;
    printf("Enter the Temmperatures");
    scanf("%f",&f);
    c=(5.0/9.0)*(f-32);
    k=c+273.15;
    printf("Temmperatures is Celsius:%f\n",c);
    printf("Temmperatures is kelvin:%f\n",k);
    return 0;
    
}