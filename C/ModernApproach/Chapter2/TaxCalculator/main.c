//=============================================================================
// Filename : main.c                                                           
// Author: Chris Ubben                                                         
// Date created: 09/11/2020                                                    
//=============================================================================

#define _CRT_SECURE_NO_WARNINGS

#define SALES_TAX_RATE 0.079f

#include <stdio.h>

int main(void)
{
    float subtotal;
    printf("Enter receipt subtotal: ");
    scanf("%f", &subtotal);

    float total = subtotal * (1.0f + SALES_TAX_RATE);

    printf("Total: %.2f\n", total);

    return 0;
}
