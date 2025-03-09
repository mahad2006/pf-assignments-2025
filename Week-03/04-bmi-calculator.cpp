#include <iostream>
using namespace std;
int main()
{
    double weight, height, bmi;

    cout << "Enter weight in kg: ";
    cin >> weight;
    cout << "Enter height in meters: ";
    cin >> height;

    bmi = weight / (height * height); // BMI Calculation

    cout << "Your BMI is: " << bmi << endl;

    // Categorizing the BMI
    if (bmi < 18.5)
        cout << "Category: Underweight" << endl;
    else if (bmi >= 18.5 && bmi < 25)
        cout << "Category: Normal weight" << endl;
    else if (bmi >= 25 && bmi < 30)
        cout << "Category: Overweight" << endl;
    else
        cout << "Category: Obese" << endl;

    return 0;
}
