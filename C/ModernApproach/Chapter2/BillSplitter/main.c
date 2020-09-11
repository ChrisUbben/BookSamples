//=============================================================================
// Filename : main.c                                                           
// Author: Chris Ubben                                                         
// Date created: 09/11/2020                                                    
//=============================================================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int subtotal;
    printf("Enter dollar amount to split: ");
    scanf("%d", &subtotal);

    int twenties = subtotal / 20;
    subtotal -= twenties * 20;

    int tens = subtotal / 10;
    subtotal -= tens * 10;

    int fives = subtotal / 5;
    subtotal -= fives * 5;

    int ones = subtotal;

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);

    return 0;
}
