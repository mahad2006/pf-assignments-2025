#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name); // Using getline to take full name input

    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello " << name << ", you are " << age << " years old." << endl;

    return 0;
}
