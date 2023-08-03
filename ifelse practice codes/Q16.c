//Q16. Write a C program to check whether a character is an alphabet, digit or special character. 

#include <stdio.h>
#include <ctype.h>

int main() 
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch>=65 && ch<=90)
    {
        printf(" %c is Capital Alphabet. \n",ch);
    }
    else if(ch>=97 && ch<=122)
    {
        printf("%c is a Small Alphabet. \n", ch);
    }
    else if(ch>=48 && ch<=57)
    {
        printf("%c is a Digit. \n", ch);
    }
    else 
    {
        printf("%c is a Special character. \n", ch);
    }
    return 0;
}