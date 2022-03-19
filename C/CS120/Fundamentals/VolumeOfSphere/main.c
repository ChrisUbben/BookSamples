#include <stdio.h>

#define PI 3.1415926

int main(void)
{
    int radius = 2;
    double volume = 4.0 / 3.0 * PI * radius * radius * radius;

    printf("The volume of a sphere with radius %i is %f\n", radius, volume);

    return 0;
}