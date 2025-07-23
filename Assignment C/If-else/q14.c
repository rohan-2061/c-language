#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the x cordinate ");
    scanf("%d",&x);
    printf("Enter the y cordinate ");
    scanf("%d",&y);
    if(x==0 && y==0)
    {
        printf("The point  the Origin.\n");
    }
    else if(x>0 && y>0)
    {
        printf("The point  the quadrant1.\n");
    }
    else if(x<0 && y>0)
    {
        
        printf("The point  the quadrant2.\n");
    }
    else if(x<0 && y<0)
    {
        
        printf("The point  the quadrant3.\n");
    }
    
    else if(x>0 && y<0)
    {
        
        printf("The point  the quadrant4.\n");
    }
    else if(x==0)
    {
        printf("the point on y\n");
    }
    else if(y==0)
    {
        
        printf("the point on x\n");
    }
    return 0;

}