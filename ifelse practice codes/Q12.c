//Q12. Write a C program to read roll no and marks of three subjects and calculate the total, percentage and division. 
#include <stdio.h>

int main() 
{
    int rollNo;
    float marks1, marks2, marks3;
    float totalMarks, percentage;

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Marks of Subject 1: \n");
    scanf("%f", &marks1);

    printf("Enter Marks of Subject 2: \n");
    scanf("%f", &marks2);

    printf("Enter Marks of Subject 3: \n");
    scanf("%f", &marks3);

    totalMarks = marks1 + marks2 + marks3;
    percentage = totalMarks / 3.0;

    if (percentage >= 60 && percentage <= 100) 
    {
        printf("First Division");
    } 
    else if (percentage >= 45) 
    {
        printf("Second Division");
    } 
    else if (percentage >= 33) 
    {
        printf("Third Division");
    } 
    else 
    {
        printf( "Fail");
    }

  printf("\nRoll Number: %d\n", rollNo);
    printf("Marks in Subject 1: %.2f\n", marks1);
    printf("Marks in Subject 2: %.2f\n", marks2);
    printf("Marks in Subject 3: %.2f\n", marks3);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    return 0;
}
