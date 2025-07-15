#include<stdio.h>
int main()
{
    int id,bs;
    float ba=30,hr=10,ptax=5,hs;
   printf("Enter Employee Id:");
    scanf("%d",&id);
    printf("Enter Basic Salary:");
    scanf("%d",&bs);
    hr=(bs*hr/100);
    ba=(bs*ba/100);
    ptax=(bs*ptax/100);
    hs=(bs-hr-ba-ptax);
    printf("\nHouse Rent%.2f",hr);
    printf("\nBasic Dearness%.2f",ba);
    printf("\nProfessional Tax%.2f",ptax);
    printf("\n Home Salary:%.2f",hs);
    return 0;


    
}

