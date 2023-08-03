//Q17. Write a C program to check whether an alphabet is a vowel or consonant. 

#include <stdio.h>
#include <ctype.h>

int main() 
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    ch = tolower(ch);

    if (ch >= 'a' && ch <= 'z') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
        {
            printf("The character is a vowel.\n");
        } 
        else 
        {
            printf("The character is a consonant.\n");
        }
    } 
    else 
    {
        printf("Invalid input: Not an alphabet.\n");
    }
    return 0;
}
