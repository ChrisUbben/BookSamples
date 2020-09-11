//=============================================================================
// Filename : main.c                                                           
// Author: Chris Ubben                                                         
// Date created: 09/11/2020                                                    
//=============================================================================

#define _CRT_SECURE_NO_WARNINGS

#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

#include <stdio.h>

int main(void)
{
    float fahrenheit; // Temp in Fahrenheit
    float celcius; // Temp in Celcius

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celcius = (fahrenheit - FREEZING_POINT) * SCALE_FACTOR;
    printf("Temperature in Celcius: %.2f", celcius);

    return 0;
}
