#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,dis;
    printf("Enter X1,y1=");
    scanf("%f%f",&x1,&y1);
    printf("Enter X2,y2=");
    scanf("%f%f",&x2,&y2);

    dis= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("distance between%.2f",dis);
    return 0;


}