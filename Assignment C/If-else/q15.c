#include<stdio.h>
int main()
{
    int basic,tax;
    printf("Enter the Basic Salary");
    scanf("%d",&basic);
    if(basic<150000)
    {
        tax=0;
    }
    else if(basic<300000)
    {
        tax=20;
    }
    else if(basic>300000)
    {
        tax=30;
    }
    printf("Tax is : %d",tax);
    return 0;
}