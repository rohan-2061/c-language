#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three maximum no:");
    scanf("%d%d%d",&a,&b,&c);
     if(a>b && a>c)
     {
        printf("A is max%d",a);
     }

     else if(b>a && b>c)
     {

         printf("b is max%d",b);
     }
 else
 {

     printf("c is max%d",c);
}
  if(a<b && a<c)
     {
        printf("a is minim%d",a);
     }

     else if(b<a && b<c)
     {

         printf("b is mini%d",b);
     }
 else
 {
     printf("c is mini%d",c);
}





    
    return 0;
}