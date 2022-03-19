#include <stdio.h>

#define YARDS_PER_MILE 1760
#define KILOS_PER_MILE 1.609

// Prints the distance of a marathon in miles, yards, and kilometers
int main(void)
{
    double miles = 26.21875;

    double kilometers = KILOS_PER_MILE * miles;
    int yards = YARDS_PER_MILE * miles;

    int yardsInRemainder = yards % YARDS_PER_MILE;
    int numMiles = yards / YARDS_PER_MILE;

    printf("A marathon is:\n");
    printf("%i miles and %i yards or\n", numMiles, yardsInRemainder);
    printf("%f kilometers or\n", kilometers);
    printf("%i total yards\n", yards);

    return 0;
}