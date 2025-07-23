#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two no");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("True ==");
    }

    else if(a>b)
    {
        printf("A no is Greater than B");
    }
    else if(a<b)
    {
        printf("A no is  less than B");
    }
  
    return 0;
}