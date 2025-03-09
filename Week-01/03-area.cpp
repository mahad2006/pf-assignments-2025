#include <iostream>
using namespace std;
int main()
{
    double length, width, area;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    area = length * width; // Calculating area

    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}

// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Program 1: Hello World
    cout << "Hello, World!" << endl;

    // Program 2: Print Name, Roll No., and Class
    string name = "TEHREEM RANA ";
    int rollNo = 12345;
    string className = "Programing fundamental";

    cout << "\n My Information :\n";
    cout << "Name: " << name << "\n";
    cout << "Roll No.: " << rollNo << "\n";
    cout << "Class: " << className << "\n";

    // Program 3: Calculate Rectangle Area
    double length, width, area;

    cout << "\nEnter length and width of rectangle:\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;

    area = length * width;
    cout << "Area of rectangle: " << area << endl;

    // Program 4: Fahrenheit to Celsius Converter
    double fahrenheit, celsius;

    cout << "\nEnter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9.0;
    cout << fahrenheit << " degrees Fahrenheit is equal to " << celsius << " degrees Celsius." << endl;

    // Program 5: Hello User
    string userName;
    int userAge;

    cout << "\n NAME : ";
    cin >> userName;
    cout << "Age : ";
    cin >> userAge;

    cout << "Hello " << userName << ", you are " << userAge << " years old." << endl;

    return 0;
}
