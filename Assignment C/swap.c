#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two Number=");
    scanf("%d%d",&a,&b);
    printf("Before Swapping=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping=%d\n",a,b);
printf("Before Swapping=%d\n",a,b);
    a=a*b;
    b=a/b;
    a=a/b;

    printf("After Swapping=%d\n",a,b);
    printf("Before Swapping=%d\n",a,b);
    
}