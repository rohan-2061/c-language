#include<stdio.h>
int main()
{
    int x,y,op,r,n;

    printf("\n 1.Equality \n 2.Less Than \n 3.Quotient and Remainder \n  4.Range \n 5.Swap\n");
        printf("Enter Your Choice");
   scanf("%d",&op);

        printf("Enter the two no");
         scanf("%d%d",&x,&y);
     
 
    
    switch(op)
    {
        case 1:
        if(x==y)
        printf("x and y Equal");
        else
        printf("x and y not equal");
        break;
        case 2:
         if(x<y)
        printf("x less tha y");
        else
        printf(" x is not less than y");
        break;
        case 3:
        r=x/y;
        printf("divide no%d\n",r);
        r=x%y;
        printf("Remainder%d",r);
        break;
        case 4:
            printf("Enter the between no");
          scanf("%d",&n);
        (n>=x && n<=y)?printf("inb%d",n):printf("outb%d",n);
        
        
        break;
        case 5:
        printf("Before Swapping \nA=%d\nB=%d",x,y);
         x=x+y-(y=x);
    printf("\nAfter Swapping\nA=%d\nB=%d",x,y); 
         break;

       default:
       printf("invalid choice");


        
    }
    return 0;
}