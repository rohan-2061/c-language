#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter LowerCharacter");
    scanf("%c",&ch);
 ch=toupper(ch);
 printf("\nLetter Uppercase%c",ch);
    return 0;
}