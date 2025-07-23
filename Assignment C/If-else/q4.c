#include<stdio.h>
int main()
{
    float cp,sp,pro;
    printf("Enter the Cost Price=");
    scanf("%f",&cp);
    printf("Enter the Selling Price=");
    scanf("%f",&sp);
    if(sp>cp)
    {
        pro=sp-cp;
        printf("Profit rs %f",pro);
    }
    else if(cp>sp)
    {
        pro=cp-sp;
        printf("Loss o %f",pro);
    }
    else{
        printf("No Profit & No Loss");
    }
}