#include <stdio.h>

float getRemainingAmount(float amount, float monthlyPayment, float interestRate)
{
    return amount - monthlyPayment + (amount * (interestRate / 100.0) / 12.0);
}

int main(void)
{
    float loanAmount, interestRate, monthlyPayment, monthlyInterestRate;

    printf("Enter amount of loan: ");
    scanf("%f", &loanAmount);
    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    loanAmount = getRemainingAmount(loanAmount, monthlyPayment, interestRate);
    printf("Balance Remaining after first payment: %.2f\n", loanAmount);
    loanAmount = getRemainingAmount(loanAmount, monthlyPayment, interestRate);
    printf("Balance Remaining after second payment: %.2f\n", loanAmount);
    loanAmount = getRemainingAmount(loanAmount, monthlyPayment, interestRate);
    printf("Balance Remaining after third payment: %.2f\n", loanAmount);

    return 0;
}
