#include <stdio.h>

int main(void)
{
    float amount;
    printf("Please Enter dollars-and-cents amount: ");
    scanf("%f", &amount);

    printf("With Tax Added: $%.2f\n", amount + (amount * 0.05));

    return 0;
}