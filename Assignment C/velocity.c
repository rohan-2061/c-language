#include<stdio.h>
int main()
{
    float v,u,a,t,s;
    printf("Enter the Acceleration and Time=");
    scanf("%f%f%f",&u,&a,&t);
    v=u+a*t;
    s=u+a*t*t;
    printf("Velocity is:%.2f\n",v);
    printf("Distance travelled is:%.2f\n",s);
    return 0;

}