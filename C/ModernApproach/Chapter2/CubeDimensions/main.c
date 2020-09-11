//=============================================================================
// Filename : main.c                                                           
// Author: Chris Ubben                                                         
// Date created: 09/11/2020                                                    
//=============================================================================

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int length; // length of the cube in inches
    int width; // width of the cube in inches
    int height; // height of the cube in inches

    printf("Enter length of cube: ");
    scanf("%d", &length);
    printf("Enter width of cube: ");
    scanf("%d", &width);
    printf("Enter height of cube: ");
    scanf("%d", &height);

    int volume = length * width * height; // volume of the cube in cubic inches

    printf("Dimensions of the cube (inches): %dx%dx%d.\n", length, width, height);
    printf("Volume of the cube (cubic inches): %d.\n", volume);

    return 0;
}
