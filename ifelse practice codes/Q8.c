//Q8. Write a C program to find the largest of three numbers.
#include <stdio.h>
int main()
{
    double n1,n2,n3;
    printf("Enter the First number: ");
    scanf("%lf",&n1);

    printf("Enter the Second number: ");
    scanf("%lf",&n2);

    printf("Enter the Third number: ");
    scanf("%lf",&n3);

    if (n1>n2 && n1>n3)
    {
        printf("n1 is largest. \n");
    }
    else if(n2>n1 && n2>n3)
    {
        printf("n2 is largest. \n");
    }
    else if(n3>n1 && n3>n2)
    {
        printf("n3 is largest. ");
    }
}