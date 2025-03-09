#include <iostream>
using namespace std;

int main()
{
    int s1, s2, s3, s4, s5, total;
    float avg;
    char grade;

    cout << "Enter marks of 5 subjects: " << endl;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    total = s1 + s2 + s3 + s4 + s5;
    avg = total / 5.0;

    if (avg >= 90)
        grade = 'A+';
    else if (avg >= 80)
        grade = 'A';
    else if (avg >= 70)
        grade = 'B';
    else if (avg >= 60)
        grade = 'C';
    else if (avg >= 50)
        grade = 'D';
    else
        grade = 'F';

    cout << "Total: " << total << "\nAverage: " << avg << "\nGrade: " << grade << endl;

    return 0;
}
