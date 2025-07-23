#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the ttriangle one");
    scanf("%d",&a);
    printf("Enter the ttriangle two");
    scanf("%d",&b);
    printf("Enter the ttriangle three");
    scanf("%d",&c);
    (a+b>c && a+c>b && b+c>a)?printf("Valid"):printf("Invalid");
    return 0;
}