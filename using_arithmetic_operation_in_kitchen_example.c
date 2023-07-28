#include <stdio.h>
int main()
{
   int a,b;
   printf("enter value of a and b : \n");
   scanf("%d%d",&a,&b);
   printf("the value before swapping is : %d and %d \n" , a,b);
   b=b-a;
   a=a+b;
   b=a-b;
   printf("value of a and b: %d and %d\n" , a,b);
   return 0;

}  