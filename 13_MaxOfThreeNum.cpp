// Algorithm Challenge
// 13 — Max of Three Numbers

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    // Ask the user to input three numbers
    cout << "Please enter 3 numbers:\n";
    cin >> num1 >> num2 >> num3;

    // Compare and find the maximum number
    if (num1 >= num2 && num1 >= num3)
    {
        cout << "The highest number is the first one: " << num1 << endl;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        cout << "The highest number is the second one: " << num2 << endl;
    }
    else
    {
        cout << "The highest number is the third one: " << num3 << endl;
    }

    return 0;
}
