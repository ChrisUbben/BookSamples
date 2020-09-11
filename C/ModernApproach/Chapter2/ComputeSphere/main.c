//=============================================================================
// Filename : main.c                                                           
// Author: Chris Ubben                                                         
// Date created: 09/11/2020                                                    
//=============================================================================

#define _CRT_SECURE_NO_WARNINGS

#define PI 3.141592654f

#include <stdio.h>

int main(void)
{
    float radius;
    printf("Enter sphere radius: ");
    scanf("%f", &radius);

    float volume = (4.0f / 3.0f) * PI * (radius * radius * radius);

    printf("Volume: %.2f\n", volume);

    return 0;
}
