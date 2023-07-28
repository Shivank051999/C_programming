#include <stdio.h>
int main()
{
   int a,b,c;
   a=10;
   b=20;

   printf("value of a : %d \n " , a);
   printf("value of b : %d \n" , b);
   c = a;
   printf("value of c : %d \n" , c);
   a = b;
   printf("value of a : %d \n" , a);
   b = c;
   printf("value of b : %d \n" , b);
   return 0;
}