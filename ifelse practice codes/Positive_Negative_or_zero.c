//Q3. Write a C program to check whether a given number is positive , negative or zero.
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 1)
    {
        printf("The number is positive. \n");
    }
    else if (num<= -1)
    {
        printf("The number is negative. \n");
    }
    else
    {
        printf("The Number is zero.");
    }
}