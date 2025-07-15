#include<stdio.h>
int main()
{
    int amt,ten,five,one;
    printf("Enter the Amount=");
    scanf("%d",&amt);
    
    ten=amt/10;               
    amt=amt%10;            
            
    five=amt/5;
    amt=amt%5;

    one=amt;
 
    printf("10 rs =%d\n",ten);
    printf("5 rs =%d\n",five);
    printf("1 rs =%d\n",one);
    return 0;
    
}