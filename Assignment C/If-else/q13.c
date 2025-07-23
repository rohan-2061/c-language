#include<stdio.h>
int main()
{
    int hour,second,minutes;
    printf("Enter a hours:");
    scanf("%d",&hour);
    printf("Enter the Minutes:");
    scanf("%d",&minutes);
    printf("Enter a Seconds:");
    scanf("%d",&second);
    if(hour>0&&hour<=24)
    {
        if(minutes>0&&minutes<=60)
        {
            if(second>0&&second<=60)
            {
                printf("valid");
            }else{
                printf("\nHour is Invalid");
            }

        }else{
            printf("\nMinutes Invalid");
        }
    }else{
        printf("\nSecond isInvalid");
    }
    return 0;
}