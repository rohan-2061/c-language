#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter the Number");
    scanf("%d%c%d",&a,&op,&b);
    switch(op)
    {
        case '+':
        printf("%d %d %c=%d",a,b,op,(a+b));
        break;
        case '-':
        printf("%d  %c %d=%d",a,b,op,(a-b));
        break;
        case '*':
        printf("%d %c %d=%d",a,b,op,(a*b));
        break;
        case '/':
        printf("%d %c %d=%d",a,b,op,(a/b));
        break;
        default:
        printf("invalid");
    }
    return 0;
}