#include <iostream>
using namespace std;

int main() 
{
    string name;
    int maths, physics, chemistry, computer, english;
    int total;
    float percentage;

    cout << "===== STUDENT MARKS CALCULATOR =====" << endl;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter Maths marks: ";
    cin >> maths;

    cout << "Enter Physics marks: ";
    cin >> physics;

    cout << "Enter Chemistry marks: ";
    cin >> chemistry;

    cout << "Enter Computer marks: ";
    cin >> computer;

    cout << "Enter English marks: ";
    cin >> english;

    total = maths + physics + chemistry + computer + english;

    percentage = total / 5.0;

    cout << " RESULT " << endl;

    cout << "Student Name: " << name << endl;
    cout << "Total Marks: " << total << " / 500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if (maths >= 35 && physics >= 35 &&
        chemistry >= 35 && computer >= 35 &&
        english >= 35)
    {

        cout << "Result: PASS" << endl;

        if (percentage >= 90) 
        {
            cout << "Grade: A+" << endl;
        }
        else if (percentage >= 80)
        {
            cout << "Grade: A" << endl;
        }
        else if (percentage >= 70) 
        {
            cout << "Grade: B" << endl;
        }
        else if (percentage >= 60)
        {
            cout << "Grade: C" << endl;
        }
        else if (percentage >= 50) 
        {
            cout << "Grade: D" << endl;
        }
        else {
            cout << "Grade: E" << endl;
        }
    }
    else
    {
        cout << "Result: FAIL" << endl;
        cout << "Grade: F" << endl;
    }

    cout << "===================" << endl;

    return 0;
}
