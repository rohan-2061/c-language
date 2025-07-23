#include<stdio.h>
int main()
{
    int num,fine;
    printf("Enter the days");
    scanf("%d",&num);
    if(num<=5)
        fine = 100;
    else if(num>=6)
        fine = 50;
    else if(num>10)
    fine = 200;
    printf("\nFine %d",fine);
    return 0;
}