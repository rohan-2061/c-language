#include<stdio.h>
int main()
{
    char s1[100],s2[100],s3[100];
    int mark1,mark2,mark3,totals,avg;
    printf("\nEnter the Subject 1=");
    scanf("%s",&s1);
      printf("\nEnter the Subject 2=");
    scanf("%s",&s2);
      printf("\nEnter the Subject 3=");
    scanf("%s",&s3);
      printf("Enter the Marks 1=");
    scanf("%d",&mark1);
      printf("\nEnter the Marks 2=");
    scanf("%d",&mark2);
      printf("\nEnter the Marks 3=");
    scanf("%d",&mark3);
    totals=(mark1+mark2+mark3);
    avg=totals/3;
    if(totals>90)
    {
        printf("First class");
    }
    else if(totals>80)
    {
        printf("\nSecond Class");
    }
    else if(totals>60)
    {
        printf("\nthird class");
    }
     else if(totals>35)
    {
        printf("\nPass");
    }
    else{
        printf("\nfail");
    }
    return 0;
    
}