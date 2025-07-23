#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three Number");
    scanf("%d%d%d",&a,&b,&c);
    (a>b && a>c)?printf("\nA is maximum no%d",a):(b>a&&b>c)?printf("\nB is maximum no%d",b):printf("\nc is maximum no%d",c);
    (a<b && a<c)?printf("\nA is minimum no%d",a):(b<a&&b<c)?printf("\nB is minimum no%d",b):printf("\nc is minimum no%d",c);
    
}