#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter a Character");
    scanf("%c",&ch);
    ch=tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("\nvowel");
    }
    else{
        printf("Consonant");
    }
}