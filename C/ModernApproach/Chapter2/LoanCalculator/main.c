//=============================================================================
// Filename : main.c                                                           
// Author: Chris Ubben                                                         
// Date created: 09/11/2020                                                    
//=============================================================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    float principal;
    printf("Enter loan principal: ");
    scanf("%f", &principal);

    float interestRate;
    printf("Enter loan interest rate: ");
    scanf("%f", &interestRate);
    interestRate = interestRate * 0.01f; // Convert to percentage
    interestRate = interestRate / 12.0f; // Convert to monthly rate

    float monthlyPayment;
    printf("Enter loan monthly payment: ");
    scanf("%f", &monthlyPayment);

    printf("interest: %f\n", interestRate);

    float month1 = (principal - monthlyPayment) + (principal * interestRate);
    float month2 = (month1 - monthlyPayment) + (month1 * interestRate);
    float month3 = (month2 - monthlyPayment) + (month2 * interestRate);

    printf("Balance remaining after first payment: $%.2f\n", month1);
    printf("Balance remaining after second payment: $%.2f\n", month2);
    printf("Balance remaining after third payment: $%.2f\n", month3);

    return 0;
}
