#include <stdio.h>

int main() 
{
    float sl, sa;

    printf("Enter the side length of the cube: ");
    scanf("%f", &sl);

    sa = 6 * sl * sl;

    printf("Surface Area of the cube = %.2f\n", sa);
    return 0;
}
