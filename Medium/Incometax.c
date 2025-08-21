#include <stdio.h>


int main()
{

    /*Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
Income Slab Tax
2.5 – 5.0L 5%
5.0L - 10.0L 20%
Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.
    */
    float income, tax = 0;

    printf("Enter your annual income (in Lakhs): ");
    scanf("%f", &income);

    if (income <= 2.5)
    {
        tax = 0;
    }
    else if (income <= 5.0)
    {
        tax = (income - 2.5) * 0.05;
    }
    else if (income <= 10.0)
    {
        tax = (2.5 * 0.05) + (income - 5.0) * 0.20;
    }
    else
    {
        tax = (2.5 * 0.05) + (5.0 * 0.20) + (income - 10.0) * 0.30;
    }

    printf("Income Tax = %.2f Lakhs\n", tax);

    return 0;
}

    