#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, y;
    double distance;

    cout << "Enter x-coordinate: ";
    cin >> x;
    cout << "Enter y-coordinate: ";
    cin >> y;

    distance = sqrt(x * x + y * y); // Calculating Euclidean distance

    cout << "Euclidean distance from (" << x << ", " << y << ") to (0, 0) is: " << distance << endl;

    return 0;
}
