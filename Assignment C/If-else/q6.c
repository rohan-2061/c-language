#include<stdio.h>
int main()
{
    int no;
    printf("Enter A Number");
    scanf("%d",&no);

          if(no%5==0 || no%7==0)
         {
            printf("The Number is divisible by 5 and 7");
         }
         else if(no%5!=0 || no%7!=0)
         {
            printf("The Number is not  divisible by 5 and 7");
         }
         return 0;
}