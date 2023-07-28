#include <stdio.h>
#include <math.h>

int main() 
{
    double radius, height, volume;

    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    volume = 3.14 * pow(radius, 2) * height;

    printf("Volume of the cylinder: %.2lf\n", volume);
    return 0;
}
