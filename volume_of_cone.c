#include <stdio.h>
#include <math.h>

int main() 
{
    double radius, height, volume;
    printf("Enter the radius of the cone: ");
    scanf("%lf", &radius);

    printf("Enter the height of the cone: ");
    scanf("%lf", &height);

    volume = (1.0 / 3.0) * 3.14 * pow(radius, 2) * height;

    printf("Volume of the cone: %.2lf\n", volume);
    return 0;
}
