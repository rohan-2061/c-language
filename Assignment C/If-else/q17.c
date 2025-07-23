#include<stdio.h>
int main()
{
    int p1,p2,p3,q1,q2,q3;
    char i1[100],i2[100],i3[100];
    float total,discount,payamt,discounta;
    printf("Enter the Item 1");
    scanf("%s",&i1);
    printf("Enter the Price 1");
    scanf("%d",&p1);
    printf("Enter the Qty 1");
    scanf("%d",&q1);

     printf("Enter the Item 2=");
    scanf("%s",&i2);
    printf("Enter the Price 2=");
    scanf("%d",&p2);
    printf("Enter the Qty 2=");
    scanf("%d",&q2);

     printf("Enter the Item 3=");
    scanf("%s",&i3);
    printf("Enter the Price 3=");
    scanf("%d",&p3);
    printf("Enter the Qty 3=");
    scanf("%d",&q3);
    total=(p1*q1)+(p2*q2)+(p3*q3);
    if(total>20000)
    {
        discount = 20;
    }
    else if(total>15000)
    {
        discount = 15;
    }
    else if(total>10000)
    {
        discount = 8;
    }
    else
    {
        discount = 0;
    }
    discounta = (total*discount)/100;
    payamt = total-discount;
    printf("\nTotal %f",total);
    printf("\nDiscount : %.2f",discount);
    printf("\nDiscount amount: %.2f",discounta);
    printf("\nPay Amount%f",payamt);
    return 0;
}