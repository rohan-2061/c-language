#include<stdio.h>
int main()
{
    float x1,y1,x2,y2,dis;
    printf("Enter X1,y1");
    scanf("%d%d",&x1,&x2);
    printf("Enter X1,y1");
    scanf("%d%d",&x1,&x2);

    dis= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("distance between%.2f",dis);
    return 0;


}