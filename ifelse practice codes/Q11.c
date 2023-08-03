//Q11. Write a C program to calculate the root of a Quadratic Equation.
#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,c,posRoot,negRoot;
    printf("enter the value of a ,b and c\n");
    scanf("%d%d%d",&a,&b,&c);

    posRoot=(-b+sqrt(b*b-4*a*c))/2*a;
    negRoot=(-b-sqrt(b*b-4*a*c))/2*a;

    printf("positive root value %d \n",posRoot);
    printf("negative root value %d \n",negRoot);

}