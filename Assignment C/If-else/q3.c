#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number");
    scanf("%d",&num);
    (num%2==0)?printf("Even no"):printf("Odd no");
    return 0;
}