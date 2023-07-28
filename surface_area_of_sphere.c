#include <stdio.h>
#include <math.h>

int main() 
{
    float radius, sa;
    const float pi = 3.14159;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    sa = 4 * pi * pow(radius, 2);

    printf("Surface Area of the sphere = %.2f\n", sa);
    return 0;
}
