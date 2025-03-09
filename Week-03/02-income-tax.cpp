#include <iostream>
using namespace std;
int main()
{
    int status;
    double income, tax = 0;

    cout << "Select your filing status:\n";
    cout << "1 - Single\n2 - Married Filing Jointly\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> status;

    if (status == 1 || status == 2)
    {
        cout << "Enter your taxable income: $";
        cin >> income;

        if (status == 1)
        {
            if (income > 372950)
                tax += (income - 372950) * 0.35, income = 372950;
            if (income > 171550)
                tax += (income - 171550) * 0.33, income = 171550;
            if (income > 82250)
                tax += (income - 82250) * 0.28, income = 82250;
            if (income > 33950)
                tax += (income - 33950) * 0.25, income = 33950;
            if (income > 8350)
                tax += (income - 8350) * 0.15, income = 8350;
            tax += income * 0.10;
        }
        else if (status == 2) // Married filing jointly
        {
            if (income > 372950)
                tax += (income - 372950) * 0.35, income = 372950;
            if (income > 208850)
                tax += (income - 208850) * 0.33, income = 208850;
            if (income > 137050)
                tax += (income - 137050) * 0.28, income = 137050;
            if (income > 67900)
                tax += (income - 67900) * 0.25, income = 67900;
            if (income > 16700)
                tax += (income - 16700) * 0.15, income = 16700;
            tax += income * 0.10;
        }
    }
    else
    {
        cout << "Invalid choice! Please restart the program.\n";
        return 1; // Exit
    }

    // Show the final tax amount
    cout << "Total tax owed: $" << tax << endl;
    return 0;
}
