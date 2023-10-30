#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    float tax_whole = bill * (tax / 100);
    bill += tax_whole;

    float tip_float = (float) tip;
    float tip_whole = bill * (tip_float / 100);

    float owe = bill + tip_whole;
    return owe / 2;
}
