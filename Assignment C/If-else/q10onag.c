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
    if(a>b && a>c)
    {
        printf("%d",a);
    }else if(b>a && b>c)
    {
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }
    if(a+b>c && a+c>b && b+c>a)
    {
        printf("Valid");
    }
    else{
        printf("invalid");
    }
}