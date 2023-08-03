//Q4. Write a C program to find whether a given year is a leap year or not. 
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the Year: ");
    scanf("%d", &num);

    if (num % 4 == 0 && num % 100 != 0 || num % 400 == 0)
    {
       printf("This is a Leap Year. \n"); 
    }
    else
    {
        printf("This is not a Leap Year. \n");
    }
}