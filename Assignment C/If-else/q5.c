#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>=0)
    {
          if(n%5==0 && n%7==0)
          {
        printf("The Number is Divisible 5 and 7\n");
          }else
          {
              printf("The Number is not Divisible 5 and 7\n");
          }
    }else{
        printf("No is Negative\n");
    }
}