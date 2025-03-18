#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    // 10 dice rolls
    for (int i = 1; i <= 10; i++)
    {
        int roll = rand() % 6 + 1; // Generate random number between 1 and 6

        // Provide feedback using switch case and Copying the output as it is from the Sir example 
        cout << "Roll " << i << ": " << roll << " - ";
        switch (roll)
        {
        case 1:
            cout << "You need to roll better.";
            break;
        case 6:
            cout << "Congratulations! You rolled the highest number.";
            break;
        default:
            cout << "You rolled " << roll << ".";
            break;
        }
        cout << endl;
    }

    return 0;
}
