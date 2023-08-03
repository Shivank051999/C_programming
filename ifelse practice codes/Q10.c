//Q10. Write a C program to find the eligibility of admission for a professional course based on the following criteria:
#include <stdio.h>
int main()
{
    int physics, mathematics, chemistry, total;
    printf("Enter the marks of Physics, Mathematics and Chemistry (Seperated by space): ");
    scanf("%d%d%d", &physics, &mathematics, &chemistry);

    total = physics + mathematics + chemistry;
    if(total >=200 && total <=300)
    {
        printf("The candidate is eligible for admission. \n");
    }
    else
    {
        printf("The candidate is not eligible for admisiion. ");
    }
}