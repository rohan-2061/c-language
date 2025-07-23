#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter the Character");
    scanf("%c",&ch);
    if(ch>=48 && ch<=57)
    {
        printf("\ndigit");
    }
    else if(ch>=97 && ch<=122)
    {
        printf("\nSmall");
    }
    else if(ch>=65 && ch<=90)
    {
        printf("\nCapital");
    }
    else{
        printf("\nSymbol");
    }
}