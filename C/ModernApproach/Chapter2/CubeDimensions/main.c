//=============================================================================
// Filename : main.c                                                           
// Author: Chris Ubben                                                         
// Date created: 09/11/2020                                                    
//=============================================================================

#include <stdio.h>

int main(void)
{
    int length = 8; // length of the cube in inches
    int width = 12; // width of the cube in inches
    int height = 10; // height of the cube in inches

    int volume = length * width * height; // volume of the cube in cubic inches

    printf("Dimensions of the cube (inches): %dx%dx%d.\n", length, width, height);
    printf("Volume of the cube (cubic inches): %d.\n", volume);

    return 0;
}
