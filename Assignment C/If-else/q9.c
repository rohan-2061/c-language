#include<stdio.h>
int main()
{
    int leep;
    printf("Enter a year");
    scanf("%d",&leep);
    if(leep%4==0 && leep%100!=0 || leep%400==0)
    {
        printf("Year is leep year");
    }
    else{
        printf("Year is not leep year");
    }
    return 0;
}