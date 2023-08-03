//Q21. Write a program in C to read any day number in integer and display day name of week in word .

#include <stdio.h>

int main()
{
    int dayNumber;
    printf("Enter the Day Number:");
    scanf("%d",&dayNumber);

    switch (dayNumber)
    {
        case 1: printf("Sunday \n");
        break;

        case 2: printf("Monday \n");
        break;

        case 3: printf("Tuesday \n");
        break;

        case 4: printf("Wednesday \n");
        break;

        case 5: printf("Thursday \n");
        break;

        case 6: printf("Friday \n");
        break;

        case 7: printf("Saturday \n");
        break;

        default: printf("Enter the number between 1 to 7 \n");
        break;
    }
    return 0;
}