#include <stdio.h>
#include <math.h>

int main() 
{
    double side_length, volume;

    printf("Enter the side length of the cube: ");
    scanf("%lf", &side_length);

    volume = pow(side_length, 3);

    printf("Volume of the cube: %.2lf\n", volume);
    return 0;
}
